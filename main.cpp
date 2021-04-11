#include <iostream>
#include "diod.h"

using namespace std;

int main()
{
    LedDiod led;

    led.setColor("blue");
    led.setBrightness(30);
    led.showColor();
    led.showBrightness();
    led.calcDiodCurrent(0.5);
    return 0;
}
