#pragma once
#include "transport.h"

class Bus :
	public Transport

{
private:
	int speed;
	int power;
public:
	Bus() : power(0), speed(0) {};
	Bus(int power, int speed, int tank) : Transport(tank), power(power), speed(speed) {};
	~Bus();

	int get_speed();
	void set_speed(int speed2);

	int get_power();
	void set_power(int power);

	string converting_to_string();

};

