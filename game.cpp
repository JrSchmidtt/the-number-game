#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!\n";
    const int secretNumber = 7; // constant variable secretNumber
    bool win = false; // variable to store the game status
    int tries = 0; // variable to store the number of tries

    while (!win) { // while the game status is not win then the loop will continue
        tries++; // increment the number of tries
        int choice; // variable to store the user's choice
        cout << "Enter your choice: ";
        cin >> choice; // read the user's choice
        cout << "You entered: " << choice << "\n";

        bool isCorrect = (choice == secretNumber); // if the user's choice is equal to the secret number then isCorrect is true
        bool isMoreThan = (choice > secretNumber); // if the user's choice is greater than the secret number then isMoreThan is true

        if (isCorrect){
            cout << "You win!\n";
            cout << "You took " << tries << " tries to win!\n";
            win = true; // set the game status to win
            return 0; // exit the program
        }
        if (isMoreThan){
            cout << "Too low!\n";
        }
        if (choice > secretNumber){
            cout << "Too high!\n";
        }

        cout << "You lose!\n";
        cout << "The secret number is: " << secretNumber << "\n";
    }
}

// cin is the input stream
// cout is the output stream
// << is the insertion operator send data to the output stream
// >> is the extraction operator read data from the input stream