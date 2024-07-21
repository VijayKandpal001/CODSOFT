# CODSOFT
 Internship Program 

# TASK 1
# Number Guessing Game

## Introduction

This is a simple yet engaging number guessing game developed using C++. The game randomly selects a number between 1 and 100 and challenges the player to guess it. With each guess, the game provides feedback on whether the guessed number is too high, too low, or close to the target number, guiding the player towards the correct answer.

## How to Play

1. **Start the Game**: Run the `Number_Guess_Game.cpp` executable. This will initiate the game and display the welcome screen.
2. **Choose Your Option**: You will be presented with two options:
   - Enter `1` to start playing the game.
   - Enter `0` to exit the game without playing.
3. **Guess the Number**: If you choose to play, enter your guessed number when prompted. The game will then provide feedback based on your guess.
4. **Feedback and Repeating the Game**: Based on your guess, the game will give hints such as "Your guess is too high," "Your guess is too low," or "You are close to the number." You can continue guessing until you correctly guess the number or decide to exit the game.

## Exiting the Game

To exit the game during gameplay, press `Ctrl + C`. Alternatively, you can select option `0` at the beginning to not start the game.
b
## Building and Running the Game

To build and run the game, ensure you have a C++ compiler installed on your system. Open the terminal or command prompt, navigate to the directory containing `Number_Guess_Game.cpp`, and compile the source code using a C++ compiler (e.g., g++). After compilation, execute the generated binary to start playing the game.





# TASK 2
# Tic-Tac-Toe Game

## Introduction

Welcome to the Tic-Tac-Toe Game repository! This project is a classic implementation of the popular board game Tic-Tac-Toe, designed to engage players in a strategic battle of Xs and Os. The game is built using C++, offering a simple yet challenging experience for all ages.

## Features

- A 3x3 grid for the game board.
- Players take turns placing their mark (X or O).
- Check for win conditions after each move.
- Detect a draw situation when no more moves are available.
- Switch between players automatically.

## How to Play

1. **Start the Game**: Run the `Tic_Tack_Toe_Game.cpp` executable. This will initiate the game and display the welcome screen.
2. **Player Turn**: Each player takes turns entering their move by inputting the row and column where they wish to place their mark (X or O).
3. **Winning and Losing**: The game checks for a win condition after each move. If a player has three of their marks in a row, column, or diagonal, they win the game. In case of a draw, the game ends in a tie.
4. **Replaying the Game**: After the game concludes, the player is given the option to replay the game.

## Building and Running the Game

To build and run the game, ensure you have a C++ compiler installed on your system. Follow these steps:

1. Clone the repository to your local machine.
2. Navigate to the directory containing `Tic_Tack_Toe_Game.cpp`.
3. Compile the source code using a C++ compiler (e.g., g++). For example:
   ```
   g++ Tic_Tack_Toe_Game.cpp -o TicTacToeGame
   ```
4. Execute the compiled binary to start playing the game:
   ```
   .\Tic_Tack_Toe_Game.exe
   ```
