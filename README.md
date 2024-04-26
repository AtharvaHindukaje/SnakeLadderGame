*Snake and Ladder Game*

This is an implementation of the classic Snake and Ladder game in C++. The game simulates the traditional board game where players take turns to roll a die and move their tokens across the board. The board contains snakes and ladders which either help the player progress or hinder their progress.

*How to Play*

1.Compile the code using a C++ compiler.
2.Run the executable.
3.Enter the names of the two players when prompted.
4.Players take turns to roll the dice by pressing Enter.
5.The game will display the outcome of each roll, including whether the player encountered a ladder or a snake.
6.The game ends when one of the players reaches the 100th square on the board.
7.The player who reaches the 100th square first wins the game.

*Features*

1.Randomized dice rolling using the rand() function.
2.Snakes and ladders are implemented using a switch-case statement.
3.The game prevents players from moving beyond the 100th square.
4.Input/output interface through the console.

*Code Structure*

1.main() function: Handles the main game loop and player turns.
2.playTurn() function: Simulates a player's turn, including dice rolling and movement.
3.rollDie() function: Generates a random number representing a die roll.
