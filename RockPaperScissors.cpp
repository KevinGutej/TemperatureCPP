#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

getPlayerChoice() {
    int choice;
    do {
        cout << "Enter your choice (0 = Rock, 1 = Paper, 2 = Scissors): ";
        cin >> choice;
    } while (choice < 0 || choice > 2);
    return choice;
}

getComputerChoice() {
    srand((time(0)));
    int choice = rand() % 3;
    return choice;
}

int main()
{
    cout << "Welcome to Rock Paper Scissors Game" << endl;

     while (true) {
        std::cout << "\nPlease choose:\n";
        std::cout << "1. Rock"<< endl;
        std::cout << "2. Paper"<< endl;
        std::cout << "3. Scissors"<< endl;
        std::cout << "4. Quit"<< endl;

        int Userchoice;
        cin >> Userchoice;

         if (choice == 4) {
            std::cout << "Thank you for playing. Goodbye!\n";
            break;
        }

         Choice UserOption;
        switch (choice) {
            case 1:
                playerChoice = UserOption::ROCK;
                break;
            case 2:
                playerChoice = UserOption::PAPER;
                break;
            case 3:
                playerChoice = UserOption::SCISSORS;
                break;
        }
    }
}

