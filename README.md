# Snakes and Ladders Game

A modern twist on the classic Snakes and Ladders game, written in C, where players can choose their moves instead of relying on dice rolls. Each game round features randomly placed snakes and ladders, making every game unique.

## Features

- **Player-controlled moves**: Instead of a random dice roll, players can choose the number they want to move.
- **Randomized Board Setup**: Snakes and ladders are placed randomly at the beginning of each game, keeping it fresh and unpredictable.
- **Strategic 'No-Move' Mechanism**: To prevent the first player from being at a disadvantage, each player is allowed up to 3 'no-move' turns where they can skip their move and wait. This gives them a chance to observe the other player’s progress and map out the location of snakes and ladders.

## How to Play

1. At the start of the game, the snakes and ladders are placed at random locations on the board.
2. On each turn, a player enters a number between 1 and 6 to move that many spaces.
3. Players can also choose to enter `0` to perform a 'no-move'. Each player is allowed only 3 no-moves during the game.
4. The first player to reach the final square wins the game, but beware of the snakes that can drag you back and the ladders that can help you climb faster!

## Compilation and Execution

```bash
gcc -o snakes_and_ladders snakes_and_ladders.c
./snakes_and_ladders
```

## Author: Surya Raghuram 

## Contact: suryaraghuramg@gmail.com
