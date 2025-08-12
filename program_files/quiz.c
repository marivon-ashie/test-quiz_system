#include <stdio.h>
#include <string.h>>

char quizMode[24] = "easy-mode.txt";

// Start of chooseQuizMoode function
void chooseQuizMode() {

    do {
        int mode;
        printf("\nPlease pick a mode from the list below.\n");
        printf("\n1. Easy");
        printf("\n2. Medium");
        printf("\n3. Hard\n\n");

        scanf("%d", &mode);

        switch (mode) {

            case 1:
                quizMode = "mode-easy.txt";
                break;

            case 2:
                quizMode = "mode-medium.txt";
                break;

            case 3:
                quizMode = "mode-hard.txt";
                break;

            default:
                printf("\nInvalid option, try again.\n")
        }

        } while (mode != 1 || mode != 2 || mode !=3);
         
}
// End of chooseQuizMoode function



// Start of saveScores function definition
int saveScores(Quiz *response, int *count, char *filename) {

    FILE *response = fopen(filename, "a+"); // Opens file with appending permission, also creates file if file doesn't exist
    // Verify if file exist
    if (response == NULL) {
        printf("\nThere was an error opening file!\n"); // Output message if there was an error
        return 1;
    }

    // Loads through the current student list
    for (int i = 0; i < *count; i++) {
        // Prints every student record into file
        fprintf(response, "Question: %s", list[i].question);
        fprintf(response, "A: %s", list[i].optionA);
        fprintf(response, "B: %s", list[i].optionB);
        fprintf(response, "C: %s", list[i].optionC);
        fprintf(response, "D: %s", list[i].optionD);
        fprintf(response, "Answer: %s", list[i].answer);
        
    }

    fclose(response); // Close file after writing to it
    return 0;
}
// End of saveScores function definition




// Start of viewPastScores function definition
int viewPastScores(Quiz *response, int *count, char *filename) {

    FILE *response = fopen(filename, "r"); // Opens file with reading permission

    if (response == NULL) {
        printf("\n There was an Error opening file!\n"); // Output message if there was an error or file doesn't exist
        return 1;
    }

    char line[100]; // Define a variable to save a complete line within the file
        // Loop through each line within the file
        while (fgets(line, sizeof(line), response)) {
        printf("%s", line); // Print each line on the console
    }

    fclose(response); // Close the file after reading its content

    return 0;

}
// End of viewPastScores function definition 


star
