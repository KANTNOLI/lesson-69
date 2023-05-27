#include "bus.h"


int Bus::get_speed() {
	return speed;
}
void Bus::set_speed(int speed2) {
	speed = speed2;
}

int Bus::get_power() { 
	return power;
}
void Bus::set_power(int power2) {
	power = power2;
}

string Bus::converting_to_string() {
	return "Type: Bus\nSpeed: " + to_string(speed) + "\nPower: " + to_string(power) + "\nTank size: " + to_string(get_fuel_tank()) + " ";
}
