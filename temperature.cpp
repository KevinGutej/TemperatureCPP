#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

// temperature sensor -> calculate average, find max, find min
// getTemperatureFromSensor() -> float

float getTemperatureFromSensor()
{ // [-20, 20]
    float randomTemperature = -20 + rand() % (20 - (-20) + 1)
                                                 randomTeperature = randomTeperature / 10 return randomTeperature;
    / [ -2.0, 2.0 ]
}

bool anyDataAvailable()
{ // x = [1, 100], if x < 80, return true; else return false
    int randomData = +1 + rand() % (100 - 1 + 1);
    if (randomData < 95)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//[1][2][4][8][2][1][-1] - Max

int main()
{
    vector<float> temperatures;
    srand(time(NULL)); // time() converts time to time as seconds since 1970
    bool dataResult = anyDataAvailable();
    while (dataResult == true)
    {
        dataResult = anyDataAvailable();
        float temperatureResult = getTemperatureFromSensor();
        temperatures.push_back(temperatureResult);
    }
    int i;
    float average = 0;
    for (i = 0; i < temperatures.size(); i++)
    {
        average += temperatures[i];
    }
    average = average / temperatures.size();
    cout << "Average: " << average << endl;

    return 0;
}
