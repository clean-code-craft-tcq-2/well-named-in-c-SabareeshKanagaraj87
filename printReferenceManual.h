//#include "GetColorFromPairNumber.h"
//#include "ColorPairToString.h"

void printReferenceManual()
{
  int i ;
  int numberOfColorCode = numberOfMajorColors * numberOfMinorColors;
  for (i=1;i<=numberOfColorCode;i++)
  {
    ColorPair colorPair = GetColorFromPairNumber(i);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("**** Reference Manual****");
    printf("Pair Number : %d  Color : %s\n", i, colorPairNames);
  }
  
}
