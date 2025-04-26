#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get computer's choice
int getComputerChoice() {
    return rand() % 3; // 0 = Rock, 1 = Paper, 2 = Scissors
}

// Function to determine the winner
void determineWinner(int player, int computer) {
    if (player == computer) {
        printf("It's a draw!\n");
    } else if ((player == 0 && computer == 2) || 
               (player == 1 && computer == 0) || 
               (player == 2 && computer == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    int playerChoice;
    int computerChoice;
    char* options[] = {"Rock", "Paper", "Scissors"};

    // Initialize random seed
    srand(time(0));

    printf("Rock, Paper, Scissors Game!\n");
    printf("Choose:\n");
    printf("0 - Rock\n");
    printf("1 - Paper\n");
    printf("2 - Scissors\n");

    printf("Enter your choice: ");
    scanf("%d", &playerChoice);

    if (playerChoice < 0 || playerChoice > 2) {
        printf("Invalid choice! Please select 0, 1, or 2.\n");
        return 1;
    }

    computerChoice = getComputerChoice();

    printf("You chose: %s\n", options[playerChoice]);
    printf("Computer chose: %s\n", options[computerChoice]);

    determineWinner(playerChoice, computerChoice);

    return 0;
}
