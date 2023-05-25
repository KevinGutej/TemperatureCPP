#include <iostream>
#include <time.h>
#include <stdlib.h> 

using namespace std;

// temperature sensor -> calculate average, find max, find min
// getTemperatureFromSensor() -> float

float getTemperatureFromSensor() { // [5, 100] , how many = 96, x mod 96 = [0+5, 95+5] // + 5
	float randomTemperature = -20 + rand() % (20 - (-20) + 1)
  // divide by 10
}

int main() {
	srand(time(NULL)); // time() converts time to time as seconds since 1970 
  
	return 0;
}



	
