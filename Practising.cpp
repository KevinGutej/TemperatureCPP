#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(nullptr));

    const int ArraySize = 10;
    int Allnumbers[ArraySize];


    for (int i = 0; i < ArraySize; i++) { //Storing in array
        Allnumbers[i] = rand();
    }

    cout << "The Random numbers: "; //Outputting random numbers
    for (int i = 0; i < ArraySize; i++) {
        cout << Allnumbers[i] << " ";
    }
    cout << endl;

    return 0;
}