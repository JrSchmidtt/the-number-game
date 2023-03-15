#include<iostream>
using namespace std;

int main (){
    cout << "Hello World!\n";
    int secretNumber = 7; // variable to store the secret number'

    int choice; // variable to store the user's choice
    cout << "Enter your choice: ";
    cin >> choice; // read the user's choice
    cout << "You entered: " << choice << "\n";

    if (choice == secretNumber) {
        cout << "You win!\n";
        return 0;
    }
    if (choice < secretNumber) {
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