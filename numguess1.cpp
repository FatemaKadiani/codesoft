#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{

    cout << "\n\t\t\t******\t****** WELCOME! TO THE NUMBER GUESSING GAME.******\t******\t\t"
         << endl;
    cout << "\n\nINFORMED DECISION MAKING COMES FROM A LONG TRADITION OF GUESSING SO TO INCULCATE THIS TRAIT WE HAVE A NUMBER GUESSING GAME.\n\n ";
    for(int i=0;i<=166;i++)
    {
    	cout << "-";
	}
    cout << "\n\t\t\t\t\t\t GUIDELINES.\t\t\t\t\t\t";
    cout << "\n\nYou have to guess a number between 1 and 100. "
            "You'll have limited choices based on the "
            "level you choose. Good Luck!"
         << endl;

    while (true) {
        cout << "\nChoose the difficulty level: \n";
        cout << "1 for easy!\t";
        cout << "2 for medium!\t";
        cout << "3 for difficult!\t";
        cout << "0 for ending the game!\n" << endl;

        // variable declaration for the difficulty choice
        int difficultyChoice;
        cout << "Enter the number: ";
        cin >> difficultyChoice;

        /* Here the srand() function is used to generate a random number and the time() funtion is provided with parameter of 0 so that the seed value
		is set to null whenever the game is replayed */
        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int playerChoice;

        // Difficulty Level:Easy
        if (difficultyChoice == 1) {
            cout << "\nYou have 10 choices for finding the "
                    "secret number between 1 and 100.";
            int choicesLeft = 10;
            for (int i = 1; i <= 10; i++) {

                // Instructing the player to guess the secret number.
                
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;

                // determining if the playerChoice matches
                // the secret number
                if (playerChoice == secretNumber) {
                    cout << "Well played! You won, "
                         << playerChoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice
                         << " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "
                         << endl;
                    if (choicesLeft == 0) {
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << secretNumber
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }

        // Difficulty level : Medium
        else if (difficultyChoice == 2) {
            cout << "\nYou have 7 choices for finding the "
                    "secret number between 1 and 100.";
            int choicesLeft = 7;
            for (int i = 1; i <= 7; i++) {

                // Instructing the player to guess the secret
                // number
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;

                // determining if the playerChoice matches
                // the secret number
                if (playerChoice == secretNumber) {
                    cout << "Well played! You won, "
                         << playerChoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice
                         << " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "
                         << endl;
                    if (choicesLeft == 0) {
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << secretNumber
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }
        // Difficulty level : Hard
        else if (difficultyChoice == 3) {
            cout << "\nYou have 5 choices for finding the "
                    "secret number between 1 and 100.";
            int choicesLeft = 5;
            for (int i = 1; i <= 5; i++) {

                // Instructing the player to guess the secret
                // number
                cout << "\n\nEnter the number: ";
                cin >> playerChoice;

                // determining if the playerChoice matches
                // the secret number
                if (playerChoice == secretNumber) {
                    cout << "Well played! You won, "
                         << playerChoice
                         << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...."
                         << endl;
                    cout << "Play the game again with "
                            "us!!\n\n"
                         << endl;
                    break;
                }
                else {
                    cout << "Nope, " << playerChoice
                         << " is not the right number\n";
                    if (playerChoice > secretNumber) {
                        cout << "The secret number is "
                                "smaller than the number "
                                "you have chosen"
                             << endl;
                    }
                    else {
                        cout << "The secret number is "
                                "greater than the number "
                                "you have chosen"
                             << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. "
                         << endl;
                    if (choicesLeft == 0) {
                        cout << "You couldn't find the "
                                "secret number, it was "
                             << secretNumber
                             << ", You lose!!\n\n";
                        cout << "Play the game again to "
                                "win!!!\n\n";
                    }
                }
            }
        }
        // To end the game
        else if (difficultyChoice == 0) {
            exit(0);
        }
        else {
            cout << "Wrong choice, Enter valid choice to "
                    "play the game! (0,1,2,3)"
                 << endl;
        }
    }
    return 0;
}

