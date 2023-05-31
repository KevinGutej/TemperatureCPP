#include <iostream>
#include <time.h>
#include <stdlib.h> 
#include <vector> 

using namespace std;

// temperature sensor -> calculate average, find max, find min
// getTemperatureFromSensor() -> float

float getTemperatureFromSensor() { // [-20, 20]
	float randomTeperature = -20 + rand() % (20 - (-20) + 1);
    randomTeperature = randomTeperature / 10;
    return randomTeperature;
}

bool anyDataAvailable() { // x = [1, 100], if x < 80, return true; else return false
	int randomData = +1 + rand() % (100 - 1 + 1);
  if(randomData < 95) 
  {
  	return true;
	}else {
  	return false;
  }
}

void printVector(const vector<float> &temperatures) { // 0.4 0.5 -0.2 ...
	int i;
	int size = temperatures.size();
	for(i=0; i < size; i++) {
  	cout << temperatures[i] << " ";
  }
}

//[1][2][4][8][2][1][-1] - Max

int main() {
	vector<float>temperatures;
	srand(time(NULL)); // time() converts time to time as seconds since 1970 
  bool dataResult = anyDataAvailable(); 
  while(dataResult == true) {
  	dataResult = anyDataAvailable(); 
  	float temperatureResult = getTemperatureFromSensor();
    temperatures.push_back(temperatureResult);
  }
  cout << "Temperatures:";
  printVector(temperatures);
  cout << endl;
  
  int i;
	float average = 0;
  for(i=0; i < temperatures.size(); i++) {
  	 average += temperatures[i];
     
  }
  average = average / temperatures.size();
  cout << "Average: "<< average << endl;
  
 	float minTemperature = temperatures[0];
  float maxTempemperature = temperatures[0];
  int sizeOfTemperatures = temperatures.size();
    for (int i = 1; i < sizeOfTemperatures; i++) {
        if (temperatures[i] < minTemperature) {
           minTemperature = temperatures[i];
        }
        if (temperatures[i] > maxTempemperature) {
            maxTempemperature = temperatures[i];
        }
    }
    
     cout << "minimum temperature: " << minTemperature << endl;
     cout << "maximum temperature: " << maxTempemperature << endl;
    
	return 0;
}
