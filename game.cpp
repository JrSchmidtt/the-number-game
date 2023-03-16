#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";
    const int secretNumber = 7; // constant variable secretNumber
    bool win = false;           // variable to store the game status
    int tries = 0;              // variable to store the number of tries
    double score = 1000.0;      // variable to store the user's score

    while (!win){
        tries++;    // increment the number of tries
        cout << "tries: " << tries << "\n";

        int choice; // variable to store the user's choice
        cout << "Enter your choice: ";
        cin >> choice; // read the user's choice
        cout << "You entered: " << choice << "\n";

        bool isCorrect = (choice == secretNumber);            // if the user's choice is equal to the secret number then isCorrect is true
        bool isMoreThan = (choice > secretNumber);            // if the user's choice is greater than the secret number then isMoreThan is true
        double pointsLost = abs(choice - secretNumber) / 2.0; // calculate the points lost abs() is the absolute value function
        score -= pointsLost;                                  // subtract the points lost from the score
        
        if (isCorrect){
            win = true;
        }
        if (isMoreThan){
            cout << "Too high!\n";
        }
        if (choice < secretNumber){
            cout << "Too low!\n";
        }
        cout << "You lose!\n";
    }
    cout << "You win!\n";
    cout << "You took " << tries << " tries to win!\n";
    cout << "Your score is: " << score << "\n";
    return 0;
}

// cin is the input stream
// cout is the output stream
// << is the insertion operator send data to the output stream
// >> is the extraction operator read data from the input stream