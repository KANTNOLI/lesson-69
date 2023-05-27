#include "gasStation.h"

int GasStation::calculateTotalGas(Transport* transport, int size) {
	int total = 0;


	for (int i = 0; i < size; i++)
	{
		total += transport[i].get_fuel_tank();
	}


	return total;
}
