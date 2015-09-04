// getLibFuncBuildInfo.cpp
//     Created: 23-MAR-2015
// Last Update: 03-SEP-2015

//   DATE      VER  DESCRIPTION
// ----------- ---- -----------------------------------------------------------
// 23-MAR-2015   1  Original
// 11-MAY-2015   2  Added Lib Build Number
// 14-MAY-2015   3  Added LogThis(-) function
// 14-MAY-2015   3  Added FileCleanUp(-) function to cleanup archived LOG files
// 18-MAY-2015   4  Added 'Company and Copyright'
// 03-SEP-2015   5  Ported to ulp_libfunc
//

#include <stdio.h>

#define LIB_VER "5"
// TBD - add char *getLibFuncVerInfo(-) returns info on versions and functionality updates

#ifdef _DEBUG
  #include "__build_num_debug.h"
  #define REL_OR_DEB "DEBUG"
#else
  #include "__build_num_release.h"
  #define REL_OR_DEB "Release"
#endif

//-----------------------------------------------------------------------------
// Returns: Ver <v> - Build Date: <date> <time>
char *getLibFuncBuildInfo(char *szBuildInfo, int nInfoLen) // !w1!
{
    szBuildInfo[0] = 0;

#ifdef _MSC_VER
    sprintf_s(szBuildInfo, nInfoLen, "Ver %s - Built: %s %s (%s Build %s)", LIB_VER, __DATE__, __TIME__, REL_OR_DEB, BUILD_NUM_TXT);
#else
    ///sprintf(szBuildInfo, "Ver %s - Built: %s %s", LIB_VER, __DATE__, __TIME__);
    sprintf(szBuildInfo, "%s Ver %s - (Build %s) Built: %s", REL_OR_DEB, LIB_VER, BUILD_NUM_TXT, BUILD_DATTIM);
#endif

    return szBuildInfo;
}
