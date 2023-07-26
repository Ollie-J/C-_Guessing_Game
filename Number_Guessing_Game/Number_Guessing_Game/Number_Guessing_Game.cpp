                                 ///Number Guessing Game///
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    int num;
    int guess;
    int tries;

    num, guess, tries = 0;

    srand(time(0));
    //sets random number between 1 & 100
    num = rand() % 100 + 1; 
    cout << "Guess The Number Game\n\n";

    do
    {
        cout << "Enter a guess between 1 & 100";
        cin >> guess;
        tries++;

        if (guess > num) {
            cout << "Too High\n\n";
        }
        else if (guess < num) {
            cout << "Too low\n\n";
        }
        else
        {
            cout << "\nCorrect! You guessed the right number in " << tries  << "guesses\n";
        }
        

        
    } while (guess != num);

    return 0;
}

