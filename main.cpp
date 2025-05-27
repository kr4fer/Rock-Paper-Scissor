#include <iostream>
#include <cstdlib> // for rand() function

using namespace std;

int main() {
  // Initialize variables
  string userChoice, computerChoice;
  int userPoints = 0, computerPoints = 0;

  // Play the game 5 times
  for (int i = 0; i < 5; i++) {
    cout << "Choose your hand (rock, paper, or scissors): ";
    cin >> userChoice;

    // Generate random computer choice
    int randomNumber = rand() % 3;
    switch (randomNumber) {
      case 0:
        computerChoice = "rock";
        break;
      case 1:
        computerChoice = "paper";
        break;
      case 2:
        computerChoice = "scissors";
        break;
    }

    cout << "Computer chose: " << computerChoice << endl;

    // Determine the winner and award points
    if (userChoice == computerChoice) {
      cout << "It's a tie!" << endl;
    } else if ((userChoice == "rock" && computerChoice == "scissors") ||
               (userChoice == "paper" && computerChoice == "rock") ||
               (userChoice == "scissors" && computerChoice == "paper")) {
      cout << "You win!" << endl;
      userPoints += 2;
    } else {
      cout << "Computer wins!" << endl;
      computerPoints += 2;
    }
  }

  // Display the final scores
  cout << "Your points: " << userPoints << endl;
  cout << "Computer points: " << computerPoints << endl;

  if (userPoints > computerPoints) {
    cout << "Congratulations! You won the game!" << endl;
  } else if (userPoints < computerPoints) {
    cout << "Sorry, you lost the game. Better luck next time!" << endl;
  } else {
    cout << "It's a tie overall!" << endl;
  }

  return 0;
}
