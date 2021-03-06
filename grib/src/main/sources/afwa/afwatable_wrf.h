
/*
 * parameter table for the Air Force Weather Agency
 * center = 57 subcenter = 4
 */

struct ParmTable parm_table_afwa_wrf[256] = {
   /* 0 */ {"var0", "undefined"},
   /* 1 */ {"PRES", "Pressure [Pa]"},
   /* 2 */ {"PRMSL", "Pressure reduced to MSL [Pa]"},
   /* 3 */ {"PTEND", "Pressure tendency [Pa/s]"},
   /* 4 */ {"PVORT", "Potential Vorticity [K m^2/kg s]"},
   /* 5 */ {"ICAHT", "ICAO Standard Atmosphere Reference Height [m]"},
   /* 6 */ {"GP", "Geopotential [m^2/s^2]"},
   /* 7 */ {"HGT", "Geopotential height [gpm]"},
   /* 8 */ {"DIST", "Geometric height [m]"},
   /* 9 */ {"HSTDV", "Std dev of height [m]"},
   /* 10 */ {"TOZNE", "Total ozone [Dobson]"},
   /* 11 */ {"TMP", "Temp. [K]"},
   /* 12 */ {"VTMP", "Virtual temp. [K]"},
   /* 13 */ {"POT", "Potential temp. [K]"},
   /* 14 */ {"EPOT", "Pseudo-adiabatic pot. temp. [K]"},
   /* 15 */ {"TMAX", "Max. temp. [K]"},
   /* 16 */ {"TMIN", "Min. temp. [K]"},
   /* 17 */ {"DPT", "Dew point temp. [K]"},
   /* 18 */ {"DEPR", "Dew point depression [K]"},
   /* 19 */ {"LAPR", "Lapse rate [K/m]"},
   /* 20 */ {"VISIB", "Visibility [m]"},
   /* 21 */ {"RDSP1", "Radar spectra (1) [non-dim]"},
   /* 22 */ {"RDSP2", "Radar spectra (2) [non-dim]"},
   /* 23 */ {"RDSP3", "Radar spectra (3) [non-dim]"},
   /* 24 */ {"PLI", "Parcel lifted index (to 500 hPa [K]"},
   /* 25 */ {"TMPA", "Temp. anomaly [K]"},
   /* 26 */ {"PRESA", "Pressure anomaly [Pa]"},
   /* 27 */ {"GPA", "Geopotential height anomaly [gpm]"},
   /* 28 */ {"WVSP1", "Wave spectra (1) [non-dim]"},
   /* 29 */ {"WVSP2", "Wave spectra (2) [non-dim]"},
   /* 30 */ {"WVSP3", "Wave spectra (3) [non-dim]"},
   /* 31 */ {"WDIR", "Wind direction [deg]"},
   /* 32 */ {"WIND", "Wind speed [m/s]"},
   /* 33 */ {"UGRD", "u wind [m/s]"},
   /* 34 */ {"VGRD", "v wind [m/s]"},
   /* 35 */ {"STRM", "Stream function [m^2/s]"},
   /* 36 */ {"VPOT", "Velocity potential [m^2/s]"},
   /* 37 */ {"MNTSF", "Montgomery stream function [m^2/s^2]"},
   /* 38 */ {"SGCVV", "Sigma coord. vertical velocity [/s]"},
   /* 39 */ {"VVEL", "Pressure vertical velocity [Pa/s]"},
   /* 40 */ {"DZDT", "Geometric vertical velocity [m/s]"},
   /* 41 */ {"ABSV", "Absolute vorticity [/s]"},
   /* 42 */ {"ABSD", "Absolute divergence [/s]"},
   /* 43 */ {"RELV", "Relative vorticity [/s]"},
   /* 44 */ {"RELD", "Relative divergence [/s]"},
   /* 45 */ {"VUCSH", "Vertical u shear [/s]"},
   /* 46 */ {"VVCSH", "Vertical v shear [/s]"},
   /* 47 */ {"DIRC", "Direction of current [deg]"},
   /* 48 */ {"SPC", "Speed of current [m/s]"},
   /* 49 */ {"UOGRD", "u of current [m/s]"},
   /* 50 */ {"VOGRD", "v of current [m/s]"},
   /* 51 */ {"SPFH", "Specific humidity [kg/kg]"},
   /* 52 */ {"RH", "Relative humidity [%]"},
   /* 53 */ {"MIXR", "Humidity mixing ratio [kg/kg]"},
   /* 54 */ {"PWAT", "Precipitable water [kg/m^2]"},
   /* 55 */ {"VAPP", "Vapor pressure [Pa]"},
   /* 56 */ {"SATD", "Saturation deficit [Pa]"},
   /* 57 */ {"EVP", "Evaporation [kg/m^2]"},
   /* 58 */ {"CICE", "Cloud Ice [kg/m^2]"},
   /* 59 */ {"PRATE", "Precipitation rate [kg/m^2/s]"},
   /* 60 */ {"TSTM", "Thunderstorm probability [%]"},
   /* 61 */ {"APCP", "Total precipitation [kg/m^2]"},
   /* 62 */ {"NCPCP", "Large scale precipitation [kg/m^2]"},
   /* 63 */ {"ACPCP", "Convective precipitation [kg/m^2]"},
   /* 64 */ {"SRWEQ", "Snowfall rate water equiv. [kg/m^2/s]"},
   /* 65 */ {"WEASD", "Accum. snow [kg/m^2]"},
   /* 66 */ {"SNOD", "Snow depth [m]"},
   /* 67 */ {"MIXHT", "Mixed layer depth [m]"},
   /* 68 */ {"TTHDP", "Transient thermocline depth [m]"},
   /* 69 */ {"MTHD", "Main thermocline depth [m]"},
   /* 70 */ {"MTHA", "Main thermocline anomaly [m]"},
   /* 71 */ {"TCDC", "Total cloud cover [%]"},
   /* 72 */ {"CDCON", "Convective cloud cover [%]"},
   /* 73 */ {"LCDC", "Low level cloud cover [%]"},
   /* 74 */ {"MCDC", "Mid level cloud cover [%]"},
   /* 75 */ {"HCDC", "High level cloud cover [%]"},
   /* 76 */ {"CWAT", "Cloud water [kg/m^2]"},
   /* 77 */ {"BLI", "Best lifted index to 500 hPa [K]"},
   /* 78 */ {"SNOC", "Convective snow [kg/m^2]"},
   /* 79 */ {"SNOL", "Large scale snow [kg/m^2]"},
   /* 80 */ {"WTMP", "Water temp. [K]"},
   /* 81 */ {"LAND", "Land-sea mask [1=land; 0=sea]"},
   /* 82 */ {"DSLM", "Deviation of sea level from mean [m]"},
   /* 83 */ {"SFCR", "Surface roughness [m]"},
   /* 84 */ {"ALBDO", "Albedo [%]"},
   /* 85 */ {"TSOIL", "Soil temp. [K]"},
   /* 86 */ {"SOILM", "Soil moisture content [kg/m^2]"},
   /* 87 */ {"VEG", "Vegetation [%]"},
   /* 88 */ {"SALTY", "Salinity [kg/kg]"},
   /* 89 */ {"DEN", "Density [kg/m^3]"},
   /* 90 */ {"RUNOF", "Runoff [kg/m^2]"},
   /* 91 */ {"ICEC", "Ice concentration [ice=1;no ice=0]"},
   /* 92 */ {"ICETK", "Ice thickness [m]"},
   /* 93 */ {"DICED", "Direction of ice drift [deg]"},
   /* 94 */ {"SICED", "Speed of ice drift [m/s]"},
   /* 95 */ {"UICE", "u of ice drift [m/s]"},
   /* 96 */ {"VICE", "v of ice drift [m/s]"},
   /* 97 */ {"ICEG", "Ice growth rate [m/s]"},
   /* 98 */ {"ICED", "Ice divergence [/s]"},
   /* 99 */ {"SNOM", "Snow melt [kg/m^2]"},
   /* 100 */ {"HTSGW", "Sig height of wind waves and swell [m]"},
   /* 101 */ {"WVDIR", "Direction of wind waves [deg]"},
   /* 102 */ {"WVHGT", "Sig height of wind waves [m]"},
   /* 103 */ {"WVPER", "Mean period of wind waves [s]"},
   /* 104 */ {"SWDIR", "Direction of swell waves [deg]"},
   /* 105 */ {"SWELL", "Sig height of swell waves [m]"},
   /* 106 */ {"SWPER", "Mean period of swell waves [s]"},
   /* 107 */ {"DIRPW", "Primary wave direction [deg]"},
   /* 108 */ {"PERPW", "Primary wave mean period [s]"},
   /* 109 */ {"DIRSW", "Secondary wave direction [deg]"},
   /* 110 */ {"PERSW", "Secondary wave mean period [s]"},
   /* 111 */ {"NSWRS", "Net short wave (surface) [W/m^2]"},
   /* 112 */ {"NLWRS", "Net long wave (surface) [W/m^2]"},
   /* 113 */ {"NSWRT", "Net short wave (top) [W/m^2]"},
   /* 114 */ {"NLWRT", "Net long wave (top) [W/m^2]"},
   /* 115 */ {"LWAVR", "Long wave [W/m^2]"},
   /* 116 */ {"SWAVR", "Short wave [W/m^2]"},
   /* 117 */ {"GRAD", "Global radiation [W/m^2]"},
   /* 118 */ {"BRTMP", "Brightness temperature [K]"},
   /* 119 */ {"LWRAD", "Radiance (with respect to wave number) [W/m sr]"},
   /* 120 */ {"SWRAD", "Radiance (with respect to wave length) [W/m^3 sr]"},
   /* 121 */ {"LHTFL", "Latent heat flux [W/m^2]"},
   /* 122 */ {"SHTFL", "Sensible heat flux [W/m^2]"},
   /* 123 */ {"BLYDP", "Boundary layer dissipation [W/m^2]"},
   /* 124 */ {"UFLX", "Zonal momentum flux [N/m^2]"},
   /* 125 */ {"VFLX", "Meridional momentum flux [N/m^2]"},
   /* 126 */ {"WMIXE", "Wind mixing energy [J]"},
   /* 127 */ {"IMGD", "Image data [integer]"},
   /* 128 */ {" 3HRPCP", " Average 3hr precip [mm/hr]"},
   /* 129 */ {" AERTP", " Aerosol type [0 ? None, 1 - Present]"},
   /* 130 */ {" HSL", " Hours since land [hours]"},
   /* 131 */ {" var131", " blank  [n/a] "},
   /* 132 */ {" var132", " blank  [n/a] "},
   /* 133 */ {" VERVEL", " Pressure Vertical Velocity [hPa/s]"},
   /* 134 */ {" DENALT", " Density Altitude [m]"},
   /* 135 */ {" WBZHGT", " Wet Bulb Zero Height [m]"},
   /* 136 */ {" HAIL", " Hail [cm]"},
   /* 137 */ {" PBLHGT", " Planetary Boundary Layer (PBL) Height [m]"},
   /* 138 */ {" TSMAX", " Thunderstorm Max Tops [m]"},
   /* 139 */ {" TSCOV", " Thunderstorm coverage [code]"},
   /* 140 */ {" CLDCIG", " Ceiling [m]"},
   /* 141 */ {" WGST", " Wind speed of gusts [m/s]"},
   /* 142 */ {" UGST", " u wind of gusts [m/s]"},
   /* 143 */ {" VGST", " v wind of gusts [m/s]"},
   /* 144 */ {" UDROFF", " Underground Runoff [mm] "},
   /* 145 */ {" CT1TOP", " Contrail Engine Type 1 Top [m]"},
   /* 146 */ {" CT1BAS", " Contrail Engine Type 1 Base [m]"},
   /* 147 */ {" CT1INT", " Contrail Engine Type 1 Intensity [0 ? None, 1 - Present]"},
   /* 148 */ {" CT2TOP", " Contrail Engine Type 2 Top [m]"},
   /* 149 */ {" CT2BAS", " Contrail Engine Type 2 Base  [m]"},
   /* 150 */ {" XLAND", " Land Mask [1 FOR LAND, 2 FOR WATER]"},
   /* 151 */ {" CT3TOP", " Contrail Engine Type 3 Top [m]"},
   /* 152 */ {" CT3BAS", " Contrail Engine Type 3 Base [m]"},
   /* 153 */ {" ISLTYP", " Dominant Soil Type [code]"},
   /* 154 */ {" IVGTYP", " Dominant Vegetation Type [code]"},
   /* 155 */ {" ABSHUM", " Absolute Humidity [g/m3]"},
   /* 156 */ {" IRVIS", " IR Visibility [m]"},
   /* 157 */ {" SNCVR ", " Snow Cover  [0 = no snow, 1 = snow]"},
   /* 158 */ {" var158", " blank  [n/a] "},
   /* 159 */ {" CANWAT", " Canopy Water  [kg/m2] "},
   /* 160 */ {" SH20", " Soil liquid water (volumetric)  [m3/m3] "},
   /* 161 */ {" POVORT", " Potential Vorticity 10-6 x m2s-1K Kg-1"},
   /* 162 */ {" DZS", " Thickness of Soil layers [m]"},
   /* 163 */ {" var163", " blank  [n/a] "},
   /* 164 */ {" var164", " blank  [n/a] "},
   /* 165 */ {" TPI", " Thunderstorm Potential Indicator [non-dim;0 ? 100]"},
   /* 166 */ {" SVTFG", " Severe Turbulence Flag (series with 250-254) [0 = off, 1 = on]"},
   /* 167 */ {" RAFG", " Precipitation Rain Flag [0 = off, 1 = on]"},
   /* 168 */ {" TSFG", " Precipitation Thunderstorm Flag [0 = off, 1 = on]"},
   /* 169 */ {" SVTSFG", " Precipitation Severe TS Flag [0 = off, 1 = on]"},
   /* 170 */ {" SNFG", " Precipitation Snow Flag [0 = off, 1 = on]"},
   /* 171 */ {" MXDFG", " Precipitation Mixed Flag [0 = off, 1 = on]"},
   /* 172 */ {" IPFG", " Precipitation Ice Pellets Flag [0 = off, 1 = on]"},
   /* 173 */ {" ZRAFG", " Precipitation Freezing Rain Flag [0 = off, 1 = on]"},
   /* 174 */ {" GRDFLX", " Ground heat Flux [W/m2] "},
   /* 175 */ {" SNOW", " Snow water equivalent  [Kg/m2] "},
   /* 176 */ {" SSK", " Surface Skin temperature  [K] "},
   /* 177 */ {" VISBY", " Visibility [code] "},
   /* 178 */ {" PWX", " Weather [code] "},
   /* 179 */ {" CLDAMT", " Layer Cloud Amount [%] "},
   /* 180 */ {" CLDBAS", " Layer Cloud Base [m] "},
   /* 181 */ {" CLDTOP", " Layer Cloud Top [m] "},
   /* 182 */ {" CLDTYP", " Layer Cloud Type [code] "},
   /* 183 */ {" SINALPHA", " Local sine of map rotation  [n/a] "},
   /* 184 */ {" COSALP", " Local cosine of map rotation  [n/a]"},
   /* 185 */ {" RTHRATEN", " Coupled Theta tendency due to radiation [kg/m3]"},
   /* 186 */ {" ICBAS", " Icing Base [m]"},
   /* 187 */ {" ICINT", " Icing [code]  "},
   /* 188 */ {" E", " Coriolis cosine latitude term [1/s]"},
   /* 189 */ {" F", " Coriolis sine latitude term [1/s]"},
   /* 190 */ {" TBINT", " Turbulence [code]"},
   /* 191 */ {" PSTAR", " Pstar (sfc pressure ? model top pressure) cbar"},
   /* 192 */ {" PRESPB", " Pressure perturbation Pa"},
   /* 193 */ {" PBLREG", " PBL Regime [code]"},
   /* 194 */ {" FRIVEL", " Friction velocity [m/s]"},
   /* 195 */ {" GRAPL", " Graupel [kg/kg]"},
   /* 196 */ {" ICCON", " Number concentration of ice [number/m3]"},
   /* 197 */ {" ATRAD", " Atmospheric radiative tendency [K/day]"},
   /* 198 */ {"TKE", " Turbulent Kinetic Energy [J/kg]"},
   /* 199 */ {" MAPSCL", " Map scale factor [non-dim]"},
   /* 200 */ {" SWDOWN", " Downward Shortwave flux at surface [W/m2] "},
   /* 201 */ {" TMN", " Soil Temperature at Lower Boundary  [K] "},
   /* 202 */ {" ZNT", " Roughness Length [m] "},
   /* 203 */ {" var203", " blank [n/a]"},
   /* 204 */ {" QST", " Q* in Similarity Theory [kg/kg] "},
   /* 205 */ {" QFX", " Upward Moisture flux at surface [kg/m2 s]"},
   /* 206 */ {" var206", " blank [n/a]"},
   /* 207 */ {" KETI", " Knapp-Ellrod Turbulence Index [code]"},
   /* 208 */ {" PANIND", " Panofsky Turbulence Index [non-dim-200 to 500]"},
   /* 209 */ {" ALSTG", " Altimeter Setting inches Hg"},
   /* 210 */ {" K X", " K index [K]"},
   /* 211 */ {" KO X", " KO index [K]"},
   /* 212 */ {" TT X", " Total totals index [K]"},
   /* 213 */ {" S X", " Sweat index [non-dim]"},
   /* 214 */ {" CAPE", " Convective available potential eng [J/kg]"},
   /* 215 */ {" CIN", " Convective inhibition [J/kg]"},
   /* 216 */ {" SRHEL", " Storm relative helicity [J/kg]"},
   /* 217 */ {" EHI", " Energy helicity index [non-dim]"},
   /* 218 */ {" ILW", " Integrated liquid water [g/m2]"},
   /* 219 */ {" COND", " Condensate [kg/kg]"},
   /* 220 */ {" CW MR", " Cloud water mixing ratio [kg/kg]"},
   /* 221 */ {" IW MR", " Ice water mixing ratio [kg/kg]"},
   /* 222 */ {" RW MR", " Rain water mixing ratio [kg/kg]"},
   /* 223 */ {" SW MR", " Snow mixing ratio [kg/kg]"},
   /* 224 */ {" HEATX", " Heat index [K]"},
   /* 225 */ {" MCONV", " Horizontal moisture convergence [kg/kg/s]"},
   /* 226 */ {" TB", " Turbulence (Intensity) [code]"},
   /* 227 */ {" CLD B", " Cloud base [m]"},
   /* 228 */ {" CLD T", " Cloud top [m]"},
   /* 229 */ {" T CLDCV", " Total cloud cover [%]"},
   /* 230 */ {" LAT", " Latitude [deg]"},
   /* 231 */ {" LON", " Longitude [deg]"},
   /* 232 */ {" THKNS", " Thickness [m]"},
   /* 233 */ {" TER HT", " Model terrain height [m]"},
   /* 234 */ {" W CHILL", " Wind Chill [deg F]"},
   /* 235 */ {" D VAL", " Height D-values [feet]"},
   /* 236 */ {" MX RH", " Maximum relative humidity [%]"},
   /* 237 */ {" MXABSH", " Maximum absolute humidity [g/m3]"},
   /* 238 */ {" MXWIND", " Maximum wind speed [m/s]"},
   /* 239 */ {" MNDEPR", " Minimum dewpoint depression [K]"},
   /* 240 */ {" TOTACP", " Total accumulated precipitation [kg/m2]"},
   /* 241 */ {" LNDUSE", " Land-use [code]"},
   /* 242 */ {" INCSNOF", " Snowfall [in]"},
   /* 243 */ {" TOTSNO", " Total snowfall [in]"},
   /* 244 */ {" PCPTYPE", " Precipitation type [code]"},
   /* 245 */ {" ICING", " Icing (Intensity) [code]"},
   /* 246 */ {" RDREF", " Radio Refractivity [no dim]"},
   /* 247 */ {" VRPOTP", " Virtual Potential Temperature [K]"},
   /* 248 */ {" LSI", " Lid Strength Index [K]"},
   /* 249 */ {" RADRF", " Radar Reflectivity [db]"},
   /* 250 */ {" LGIFG", " Light Icing Flag [0 = off, 1 = on]"},
   /* 251 */ {" MDIFG", " Moderate Icing Flag [0 = off, 1 = on]"},
   /* 252 */ {" SVIFG", " Severe Icing Flag [0 = off, 1 = on]"},
   /* 253 */ {" LGTFG", " Light Turbulence Flag [0 = off, 1 = on]"},
   /* 254 */ {" MDTFG", " Moderate Turbulence Flag [0 = off, 1 = on]"},
   /* 255 */ {" var255", " Missing [n/a]"},

};


