/*
 * Copyright 1998-2009 University Corporation for Atmospheric Research/Unidata
 *
 * Portions of this software were developed by the Unidata Program at the
 * University Corporation for Atmospheric Research.
 *
 * Access and use of this software shall impose the following obligations
 * and understandings on the user. The user is granted the right, without
 * any fee or cost, to use, copy, modify, alter, enhance and distribute
 * this software, and any derivative works thereof, and its supporting
 * documentation for any purpose whatsoever, provided that this entire
 * notice appears in all copies of the software, derivative works and
 * supporting documentation.  Further, UCAR requests that the user credit
 * UCAR/Unidata in any publications that result from the use of this
 * software or in any product that includes this software. The names UCAR
 * and/or Unidata, however, may not be used in any advertising or publicity
 * to endorse or promote any products or commercial entity unless specific
 * written permission is obtained from UCAR/Unidata. The user also
 * understands that UCAR/Unidata is not obligated to provide the user with
 * any support, consulting, training or assistance of any kind with regard
 * to the use, operation and performance of this software nor to provide
 * the user with any updates, revisions, new versions or "bug fixes."
 *
 * THIS SOFTWARE IS PROVIDED BY UCAR/UNIDATA "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL UCAR/UNIDATA BE LIABLE FOR ANY SPECIAL,
 * INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING
 * FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
 * NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION
 * WITH THE ACCESS, USE OR PERFORMANCE OF THIS SOFTWARE.
 */
package thredds.catalog2.xml.parser;

import junit.framework.*;
import thredds.catalog2.xml.parser.ThreddsXmlParser;
import thredds.catalog2.xml.parser.ThreddsXmlParserException;
import thredds.catalog2.xml.parser.stax.StaxThreddsXmlParser;
import thredds.catalog2.xml.writer.ThreddsXmlWriterFactory;
import thredds.catalog2.xml.writer.ThreddsXmlWriter;
import thredds.catalog2.xml.writer.ThreddsXmlWriterException;
import thredds.catalog2.*;
import thredds.catalog2.builder.CatalogBuilder;
import thredds.catalog2.builder.DatasetNodeBuilder;
import thredds.catalog2.builder.ThreddsMetadataBuilder;
import thredds.catalog.ServiceType;

import java.io.StringReader;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.List;

/**
 * _more_
 *
 * @author edavis
 * @since 4.0
 */
public class TestCatalogParser extends TestCase
{

//  private ThreddsXmlParser me;

  public TestCatalogParser( String name )
  {
    super( name );
  }

  // 1) dataset with urlPath and serviceName attributes
  // 2) dataset with urlPath att and serviceName child element
  // 3) dataset with urlPath att and child metadata element with child serviceName element
  // 4) same as 3 but metadata element has inherited="true" attribute
  // 5) same as 3 but metadata element is in dataset that is parent to dataset with urlPath
  // 6) 1-5 where serviceName points to single top-level service
  // 7) 1-5 where serviceName points to compound service
  // 8) 1-5 where serviceName points to a single service contained in a compound service

  public void testCatalogSingleDatasetAccessAttributes()
  {
    String docBaseUriString = "http://test/thredds/catalog2/xml/parser/TestCatalogParser/testCatalogSingleDatasetAccessAttributes.xml";

    String catXml = CatalogXmlUtils.getCatalogWithSingleAccessDatasetOldStyle();

    Catalog cat = this.parseCatalog( catXml, docBaseUriString );

    List<DatasetNode> dsNodes = cat.getDatasets();
    assertTrue( dsNodes.size() == 1 );
    DatasetNode dsn = dsNodes.get( 0 );
    assertTrue( dsn instanceof Dataset );
    List<Access> accesses = ( (Dataset) dsn ).getAccesses();
    assertTrue( accesses.size() == 1);
    Access access = accesses.get( 0 );
    assertEquals( access.getService().getType(), ServiceType.OPENDAP );
    assertEquals( access.getUrlPath(), "test/test1.nc");
  }

  public void testCatalog()
  {
    String docBaseUriString = "http://test/thredds/catalog2/xml/parser/TestCatalogParser/testCatalog.xml";

    StringBuilder doc = new StringBuilder( "<?xml version='1.0' encoding='UTF-8'?>\n" )
            .append( "<catalog xmlns='http://www.unidata.ucar.edu/namespaces/thredds/InvCatalog/v1.0'" )
            .append( " xmlns:xlink='http://www.w3.org/1999/xlink'" )
            .append( " name='Unidata THREDDS Data Server' version='1.0.1'>\n" )
            .append( "  <service name='all' serviceType='Compound' base=''>\n" )
            .append( "    <service name='odap' serviceType='OPENDAP' base='/thredds/dodsC/' />\n" )
            .append( "    <service name='wcs' serviceType='WCS' base='/thredds/wcs/'>\n" )
            .append( "      <property name='someInfo' value='good stuff' />\n" )
            .append( "    </service>" )
            .append( "  </service>" )
            .append( "  <property name='moreInfo' value='more good stuff' />\n" )
            .append( "  <dataset name='fred'>" )
            .append( "    <access urlPath='fred.nc' serviceName='odap' />" )
            .append( "  </dataset>" )
            .append( "  <dataset name='fred2' serviceName='odap' urlPath='fred2.nc' />" )
            .append( "  <dataset name=\"Realtime data from IDD\">\n" )
            .append( "    <catalogRef xlink:href=\"idd/models.xml\" xlink:title=\"NCEP Model Data\" name=\"\" />\n" )
            .append( "    <catalogRef xlink:href=\"idd/radars.xml\" xlink:title=\"NEXRAD Radar\" name=\"\" />\n" )
            .append( "    <catalogRef xlink:href=\"idd/obsData.xml\" xlink:title=\"Station Data\" name=\"\" />\n" )
            .append( "    <catalogRef xlink:href=\"idd/satellite.xml\" xlink:title=\"Satellite Data\" name=\"\" />\n" )
            .append( "  </dataset>\n" )
            .append( "  <dataset name=\"Other Unidata Data\">\n" )
            .append( "\n" )
            .append( "    <catalogRef xlink:href=\"idd/rtmodel.xml\" xlink:title=\"Unidata Real-time Regional Model\" name=\"\" />\n" )
            .append( "    <catalogRef xlink:href=\"galeon/catalog.xml\" xlink:title=\"Unidata GALEON Experimental Web Coverage Service (WCS) datasets\" name=\"\" />\n" )
            .append( "    <dataset name=\"Test Restricted Dataset\" ID=\"testRestrictedDataset\" urlPath=\"restrict/testData.nc\" restrictAccess=\"tiggeData\">\n" )
            .append( "      <serviceName>odap</serviceName>\n" )
            .append( "      <dataType>Grid</dataType>\n" )
            .append( "    </dataset>\n" )
            .append( "  </dataset>\n" )
            .append( "</catalog>" );

    Catalog cat = this.parseCatalog( doc.toString(), docBaseUriString );

    String catName = "Unidata THREDDS Data Server";
    assertTrue( "Catalog name [" + cat.getName() + "] not as expected [" + catName + "].",
                cat.getName().equals( catName ) );
    // ToDo More testing.

    writeCatalogXml( cat );
  }

  public void testThreddsMetadata()
          throws URISyntaxException,
                 ThreddsXmlParserException
  {
    String docBaseUriString = "http://test.catalog.parser/threddsMetadata.xml";
    String catXml = CatalogXmlUtils.wrapThreddsXmlInCatalogDatasetMetadata( "<serviceName>odap</serviceName>\n" );

    URI docBaseUri = new URI( docBaseUriString);
    ThreddsXmlParser cp = StaxThreddsXmlParser.newInstance();
    CatalogBuilder catBuilder = cp.parseIntoBuilder( new StringReader( catXml), docBaseUri );

    assertNotNull( catBuilder );

    List<DatasetNodeBuilder> dsBuilders = catBuilder.getDatasetNodeBuilders();
    assertTrue( dsBuilders.size() == 1 );
    DatasetNodeBuilder dsnBuilder = dsBuilders.get( 0 );
    ThreddsMetadataBuilder tmdb = dsnBuilder.getThreddsMetadataBuilder();

//    assertTrue( md.isContainedContent());
//
//    this.writeMetadataXml( md );
  }

  private Catalog parseCatalog( String docAsString, String docBaseUriString )
  {
    URI docBaseUri;
    try
    { docBaseUri = new URI( docBaseUriString ); }
    catch ( URISyntaxException e )
    {
      fail( "Syntax problem with URI [" + docBaseUriString + "]." ); return null;
    }

    Catalog cat;
    ThreddsXmlParser cp = StaxThreddsXmlParser.newInstance();
    try
    { cat = cp.parse( new StringReader( docAsString ), docBaseUri ); }
    catch ( ThreddsXmlParserException e )
    {
      fail( "Failed to parse catalog: " + e.getMessage() ); return null;
    }

    assertNotNull( "Result of parse was null catalog [" + docBaseUriString + "].",
                   cat );
    return cat;
  }

  private void writeCatalogXml( Catalog cat )
  {
    ThreddsXmlWriter txw = ThreddsXmlWriterFactory.newInstance().createThreddsXmlWriter();
    try
    {
      txw.writeCatalog( cat, System.out );
    }
    catch ( ThreddsXmlWriterException e )
    {
      e.printStackTrace();
      fail( "Failed writing catalog to sout: " + e.getMessage() );
    }
  }

  private void writeMetadataXml( Metadata md )
  {
    ThreddsXmlWriter txw = ThreddsXmlWriterFactory.newInstance().createThreddsXmlWriter();
    try
    {
      txw.writeMetadata( md, System.out );
    }
    catch ( ThreddsXmlWriterException e )
    {
      e.printStackTrace();
      fail( "Failed writing catalog to sout: " + e.getMessage() );
    }
  }
}