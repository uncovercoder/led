#pragma once

class LedDiod
{
public:
	LedDiod();
	void setColor(std::string color);
	void setBrightness(int br);
	void showColor();
	void showBrightness();
	double calcDiodCurrent(double voltage);
	~LedDiod();

private:
	double voltage;
	int br;
	double i_sat = 0.00000001;
	double vt = 0.026;
	std::string color;
};

