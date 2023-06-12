#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>


using namespace std;

float randomNumber() {
	float randomNum = rand() % 100001;
  return randomNum;
}

void creatingFile(string fileName)  {
	ofstream file(fileName.c_str());
  file.close();
}

float calculatingAverage(string fileName, float randomFloatNumber) {
    //ofstream file(fileName.c_str());
     if (file.is_open()) {
        double num;
        while (file >> num && randomFloatNumber.size() < 10) {
            randomFloatNumber.push_back(num);
    }
    file.close();
    } else {
        cout << "Error: Unable to open or read the file " << filename;
        return 0;
    }
    if (randomFloatNumber.size() < 10) {
        cout << "Error: The file " << filename << " does not contain enough numbers";
        return 0;
    }

    float average = 0;
    for(i=0; i < randomFloatNumber.size(); i++) {
        average += randomFloatNumber[i];
        average = average / randomFloatNumber.size();
    }
    return average;
}

void randomFloatNumbers(string fileName) {
	int i;
	float divisor = 100;
  ofstream file(fileName.c_str(), ios::app);
	for(i=0; i <= 9; i++)
  {
  	float randomFloatNumber = rand() / divisor;
    file << " " << randomFloatNumber;

  }
  //995 -> 9.95
    file.close();
}

int main() {
	string fileName;
 	srand(time(NULL));
  cout << "Enter file name: ";
  cin >> fileName;
  creatingFile(fileName);
	randomFloatNumbers(fileName);
	return 0;
}





// Functions:
// - (filename) create an empty file
// - (filename) generate 10 floating point numbers and put them into the file
// - (filename) read 10 numbers from the file and calculate average, returns the average





























