Rock-Paper-Scissors: 3 Rounds Game 🎮
This is a simple Rock-Paper-Scissors game implemented in C++. The game allows you to play against an AI opponent in a best-of-three rounds format. It's interactive, fun, and demonstrates basic object-oriented programming concepts such as classes, inheritance, and dynamic user input handling.

Features ✨
Three Rounds Gameplay: The first to win 2 out of 3 rounds becomes the champion.

Choices Display: Offers a clear selection of Rock, Paper, or Scissors with simple numeric input.

AI Opponent: Uses random number generation to simulate opponent moves.

Score Tracking: Keeps track of player and opponent scores.

Win or Lose Feedback: Displays outcomes for each round, such as "You win!", "You lose!", or "It's a tie!"

Play Again Option: Option to reset the game and play multiple rounds.

How It Works 🛠️
The game displays a header and introduces the rules.

Players choose between Rock (0), Paper (1), or Scissors (2).

The AI opponent randomly selects its choice.

The game announces round results and updates the scores.

The game ends when either the player or the AI wins two rounds.

Players can choose to play again or exit the game.

Example Interaction 💻
3 ROUNDS GAME
Rock, Paper, Scissors Game
-----------------------

Choose one of the following:
Rock(0), Paper(1), Scissors(2)
Your choice: 0

You chose: Rock
Opponent chose: Scissors

You win!

Player: 1 || Opponent: 0

u wanna play again? (y/n): y
The game resets
==============================
Concepts Used 📚
Object-Oriented Programming (OOP):

gamefunctions: Base class for core game logic (choices, opponent generation).

scoreboard: Derived class for tracking and displaying scores.

rpsgame: Final game class for managing gameplay flow.

Random Number Generation: AI opponent uses rand() to select its choice.

Input Validation: Ensures players provide valid choices (0, 1, or 2).

Control Structures: Implements loops (do-while) and conditions for game flow.