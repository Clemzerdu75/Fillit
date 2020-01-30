# FILLIT

 3rd C project for 42 school.

This programm will take a file as parameter, which contains a list of Tetriminos, and arrange them in order to create the smallest square possible.

(Group project carried out with [pommedepain](https://github.com/pommedepain))

## SUMMARY

- What is Fillit ?
- Usage

## What is Fillit ?

![Fillit Demo](./img/fillit.gif)

- Fillit is a programme that parses a file, checks its validity and uses backtracking to find the best solution possible to sort the data contained within

- The expected file needs to have a list of "tetriminos", separated by a white line. A tetriminos needs to have 4 lines of 4 characters. It can only contain "." and "#".

- "." represents empty spaces.

- "#" represents one block of tetriminos.

- A tetriminos is a classic piece of Tetris composed of 4 blocks. Each block of a tetriminos needs to touch at least one side of another block (up, down, left, right).

- The resulted grid is ordered by tetriminos apparition in the file. Amongst all the possibilities where a tetriminos can be placed,the most upper-left position will always be favoured.

- To visually identify tetriminos in the final square solution, a capital letter is assigned to each of them, starting with 'A' and increasing( Following this logic, there cannot be more than 26 tetriminos).

- If a file is invalid the programme will return "error". If no file is provided, it will return its "usage: ./fillit file_descriptor" 


## Usage

Run: `make`

Run: `./fillit ./examples/TEST_FILE_NAME`

**NB:** 
You have 3 example files:
- A little one with 4 tetriminos
- A big one with 26 tetriminos (the maximum allowed)
- An invalid one with a bad tetrminos description and some indentation

