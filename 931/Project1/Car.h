#pragma once
#include <string>

class Car
{
public:
	Car(std::string model, int mass, int power);
	virtual int getTimeTo100() = 0;

protected:
	std::string model;
	int mass, power;
};



// поля, метод возвр время разгона от марки авто
// model, mass, power, kpd
