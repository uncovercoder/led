#include <iostream>
#include "diod.h"
using namespace std;

LedDiod::LedDiod() {
	voltage = 3;
}

void LedDiod::setColor(string col) {
    if (col != "green" && col != "blue") {
        color = "red";
    }
    else if (col == "blue") {
        color = "blue";
    }
    else {
        color = "green";
    }
}

void LedDiod::setBrightness(int bright) 
{
	br = bright;
}

void LedDiod::showBrightness() {
	cout << "led brightness is " << br << endl;
}

void LedDiod::showColor() {

	cout << "led color is " << color << endl;

}

double LedDiod::calcDiodCurrent(double v) {
	double i = i_sat * (exp(v / vt) - 1);
	return i;
}

LedDiod::~LedDiod() {

}


//void LedDiod::showColor() {
//	cout << "led color is " << color;
//}

//void calcDiodCurrent
