//#include "GetColorFromPairNumber.h"
//#include "ColorPairToString.h"

void printReferenceManual()
{
  
  for (int i=0;i<5;++i)
  {
    ColorPair colorPair = GetColorFromPairNumber(i);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    //assert(colorPair.majorColor == expectedMajor);
    //assert(colorPair.minorColor == expectedMinor);
    //printf("Pair No : %d - Major Color : %s, Minor Color : %s\n",i,colorPairNames,colorPairNames);
  }
  
}
