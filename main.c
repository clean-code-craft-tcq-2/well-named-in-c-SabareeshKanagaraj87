#include <stdio.h>
#include "ColorDefinition.h"
#include "testNumberToPair.h"
#include "testPairToNumber.h"
#include "printReferenceManual.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    printReferenceManual();

    return 0;
}
