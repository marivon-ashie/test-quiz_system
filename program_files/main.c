#include <stdio.h>
#include "quiz.h"


int choice;


int main() {

    // Welcome messaging
    printf("\nQuiz/Test System");

    // Program Menu
    do {

        printf("\nPlease pick an option from the list below.\n");
        printf("\n1. Start Quiz");
        printf("\n2. ChooseQuizMode");
        printf("\n3. View Past Scores");
        printf("\n4. Exit Program\n\n");
        
        // End of program menu

        scanf("%d", &choice); // save user input as option

        // Analyze user input and respond accordingly
        switch (choice) {

            case 1:

                startQuiz(); // Load startQuiz function
                break;

            case 2:

                chooseQuizMode(); // Load chooseQuizMode function
                break;

            case 3:

                viewPastScores(); // Load viewPastScores function
                break;

            case 4:

                exitProgram(); // Load exitProgram function
                break;

            default:
                printf("\nInvalid input.\n");

        }

    } while (choice != 0); // Ensures program keeps running unless use decides to exit program

    return 0;

}