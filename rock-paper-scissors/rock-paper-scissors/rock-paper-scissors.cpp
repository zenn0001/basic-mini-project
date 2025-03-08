#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

class gamefunctions { 
  protected:
    // choices
    string choices[3] = {"Rock", "Paper", "Scissors"};
    int randomchoices = sizeof(choices) / sizeof(choices[0]);
    // opponent's choice variable
    int opponent;
    // your choice variable
    int yourchoice;

  public:
    gamefunctions() {
        srand(static_cast<unsigned int>(time(NULL)));
    }

    void generateOpponentChoice() {
        opponent = rand() % randomchoices;
    }

    void displayheader(){
        cout << "3 ROUNDS GAME" << endl << "Rock, Paper, Scissors Game" << endl << "-----------------------" << endl << endl;
    }

    void displayChoices() { 
        cout << "Choose one of the following: " << endl;
        cout << "Rock(0), Paper(1), Scissors(2)" << endl;
    }

    void displayyourchoice() {
      do {
          cout << "Your choice: ";
          cin >> yourchoice;
          cout << endl;
          if (yourchoice < 0 || yourchoice > 2)
              cout << "Invalid choice! Please enter 0, 1, or 2." << endl;
      } while (yourchoice < 0 || yourchoice > 2);
  }
  

    void displaybothchoices() {
        switch (yourchoice) {
            case 0:
                cout << "You chose: " << choices[0] << endl<< endl;
                cout << "Opponent chose: " << choices[opponent] << endl << endl;
                break;
            case 1:
                cout << "You chose: " << choices[1] << endl;
                cout << "Opponent chose: " << choices[opponent] << endl << endl;
                break;
            case 2:
                cout << "You chose: " << choices[2] << endl;
                cout << "Opponent chose: " << choices[opponent] << endl << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        } 
    }
};

class scoreboard : public gamefunctions {
  public:
    int player = 0;
    int opponentScore = 0;

    void winorlosefunction() {
        if (yourchoice == 0 && opponent == 2) {
            cout << "You win!" << endl << endl;
            player++;
        } else if (yourchoice == 1 && opponent == 0) {
            cout << "You win!" << endl << endl;
            player++;
        } else if (yourchoice == 2 && opponent == 1) {
            cout << "You win!" << endl << endl;
            player++;
        } else if (yourchoice == 0 && opponent == 1) {
            cout << "You lose!" << endl << endl;
            opponentScore++;
        } else if (yourchoice == 1 && opponent == 2) {
            cout << "You lose!" << endl << endl;
            opponentScore++;
        } else if (yourchoice == 2 && opponent == 0) {
            cout << "You lose!" << endl << endl;
            opponentScore++;
        } else if (yourchoice == opponent) {
            cout << "It's a tie!" << endl << endl;
        }
    }

    void displayScore() {
        cout << "Player: " << player << " || opponent: " << opponentScore << endl << endl;
    }

    void displayscoreboards() {
      winorlosefunction();
      displayScore();
    }

    void displaywinner() {
      if (player == 2) {
        cout << "Congratulations! You won the game!" << endl;
      } else if (opponentScore == 2) {
        cout << "You lost the game!" << endl;
      }
    }
};

class rpsgame : public scoreboard {
  public:
    void startgame() {
      player = 0;
      opponentScore = 0;

        do {
            generateOpponentChoice();
            displayChoices();
            displayyourchoice();
            displaybothchoices();
            winorlosefunction();
            displayScore();
        } while (player < 2 && opponentScore < 2);
        displaywinner();
    }
};

int main() {
    rpsgame rps;
    string playagain;

  do {
    rps.displayheader();
    rps.startgame();

    while (true) { 
      cout << "u wanna play again? (y/n): ";
      cin >> playagain;

      if (playagain == "y" || playagain == "Y") {
        cout << "the game resets" << endl << "==============================" << endl;
        break;
      }
      else if (playagain == "n" || playagain == "N") {
        cout << "tnx for playing!" << endl;
        return 0;
      }
      else {
        cout << "invalid input! Please enter (y/n)." << endl;
      }
    }
  } while (true);

return 0;
}