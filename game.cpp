#include<iostream>
using namespace std;

int main (){
    cout << "Hello World!\n";
    const int secretNumber = 7;  // constant variable secretNumber

    int choice; // variable to store the user's choice
    cout << "Enter your choice: ";
    cin >> choice; // read the user's choice
    cout << "You entered: " << choice << "\n";

    bool isCorrect = (choice == secretNumber); // if the user's choice is equal to the secret number then isCorrect is true 
    bool isMoreThan = (choice > secretNumber); // if the user's choice is greater than the secret number then isMoreThan is true

    if (isCorrect) {
        cout << "You win!\n";
        return 0;
    }
    if (isMoreThan) {
        cout << "Too low!\n";
    }
    if (choice > secretNumber) {
        cout << "Too high!\n";
    }

    cout << "You lose!\n";
    cout << "The secret number is: " << secretNumber << "\n";
    return 0;
}

// cin is the input stream
// cout is the output stream
// << is the insertion operator send data to the output stream
// >> is the extraction operator read data from the input stream