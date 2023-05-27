#pragma once
#include "main.h"

class Transport
{
private:
	int fuel_tank;
public:
	
	Transport() : fuel_tank(0) {};
	Transport(int fuel_tank) : fuel_tank(fuel_tank) {};
	~Transport() {};

	int get_fuel_tank();
	void set_fuel_tank(int fuel_tank);




};

