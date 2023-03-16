#include <iostream>
using namespace std;

int main()
{
    cout.precision(2); // set the precision to 2 decimal places
    cout << fixed;     // set the output to fixed point notation

    cout << "THE NUMBER GAME\n";
    cout << "Difficulty Levels\n";
    cout << "Easy (E) or Medium (M) or Hard (H)\n";

    char difficulty; // variable to store the user's choice
    cin >> difficulty; // read the user's choice
    
    int max_tries = 2;    // variable to store the maximum number of tries
    if (difficulty == 'E' || difficulty == 'e'){
        cout << "You chose Easy\n";
        max_tries = 15;
    }
    if (difficulty == 'M' || difficulty == 'm'){
        cout << "You chose Medium\n";
        max_tries = 10;
    }
    if (difficulty == 'H' || difficulty == 'h'){
        cout << "You chose Hard\n";
        max_tries = 5;
    }
    cout << "You have " << max_tries << " tries to guess the number\n";

    const int secret_number = 7; // constant variable secretNumber
    bool win = false;           // variable to store the game status
    int tries = 0;              // variable to store the number of tries
    double score = 1000.0;      // variable to store the user's score

    while (!win && max_tries > 0){
        max_tries --; // decrement the number of tries
        tries++;    // increment the number of tries
        cout << "tries: " << tries << "\n";

        int choice; // variable to store the user's choice
        cout << "Enter your choice: ";
        cin >> choice; // read the user's choice
        cout << "You entered: " << choice << "\n";

        bool isCorrect = (choice == secret_number);            // if the user's choice is equal to the secret number then isCorrect is true
        bool isMoreThan = (choice > secret_number);            // if the user's choice is greater than the secret number then isMoreThan is true
        double pointsLost = abs(choice - secret_number) / 2.0; // calculate the points lost abs() is the absolute value function
        score -= pointsLost;                                  // subtract the points lost from the score

        if (isCorrect){
            win = true;
        }
        if (isMoreThan){
            cout << "Too high!\n";
        }
        if (choice < secret_number){
            cout << "Too low!\n";
        }
        if (max_tries > 0){
            cout << "You have " << max_tries << " tries left\n";
        }
    }
    if (!win){
        cout << "You lose!\n";
        return 0;
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