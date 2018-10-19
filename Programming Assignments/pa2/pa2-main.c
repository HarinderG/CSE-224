/*
	Harinder Gakhal
	10/09/2018
	CSE 224
	Programming Assignment 2
	PA2 will be the same function as PA1: a program that plays a stick-picking game, with the following changes:
	* the program must be written in C
	* the user always goes first
	* the user may be badly behaved: they might enter anything at anytime, so your program must be prepared to handle any input
	* to determine how many sticks to start with, the game accepts either a command line parameter or program input. 
		If a command line argument is given, make sure:
			- there is exactly one such argument
			- the argument is a valid integer
	 	If no command line arguments are present, read a number from the user, and make sure it is a valid, positive integer.
	 	If any errors are detected in choosing the initial number of sticks, print a message and exit.
	* when the user is specifying how many sticks they want to pick, make sure they enter a valid number. This means:
		- they don't just hit enter
		- they enter an integer
		- the integer is between 1 and 3
		If there is any problem with their entry, ask them to re-enter, and keep trying until they make a valid entry.
	* You must use sscanf to test all entries. Do not simply compare the character to '1' '2 and '3' or use "atoi"
*/

#include <stdio.h>

// Function prototypes
void printSticks(int stickCount);
int isInt(char *);

int main(int argc, char **argv)
{
	// initialize variables
	char readIn[10];
	char whoGoes = 'u';
	int flag, flag1 = 0;
	int totalSticks, takeOut;

	// Greet user
	printf("Welcome to the stick game!\n");
	printf("How this game works:\n");
	printf("2 players take turns picking either 1, 2 or 3 sticks from a pile. Whoever picks the last stick wins.\n\n\n\n");

	// Ask user for totalSticks
	printf("How many sticks do you want to start with? (must be an integer >= 10)\n");
	// If totalSticks is given in command line arg
	if (argc == 2)
	{
		if (isInt(argv[1]))
		{
			sscanf(argv[1], "%d", &totalSticks);
			if (totalSticks < 10)
			{
				printf("Your number must be greater than or equal to 10!\n");
				return 0;
			}
			printSticks(totalSticks); // Print intial stick #
		}
		else
			return 0;
	}
	else if (argc > 2) // Too many args
		printf("Too many command line arguments! Try again.\n");
	else if (argc == 1) // Ask via program
	{
		fgets(readIn, 10, stdin);
		
		if (isInt(readIn))
		{
			sscanf(readIn, "%d", &totalSticks);
			if (totalSticks < 10)
			{
				printf("Your number must be greater than or equal to 10!\n");
				return 0;
			}
			printSticks(totalSticks); // Print intial stick #
		}
		else
			return 0;
	}

	// Computer and user back and forth
	printf("You will start it off!\n");
	while(flag == 0)
	{
		// USER GOES
		if (whoGoes == 'u')
		{
			// Ask for tskeout, and check if its valid
			printf("It is your turn! How many sticks would you like to take? 1, 2 or 3?\n");
			flag1 = 0;
			while(flag1 == 0)
			{
				fgets(readIn, 10, stdin);
				if (isInt(readIn)) // if integer
				{
					takeOut = 0;
					sscanf(readIn, "%d", &takeOut);
					if ((takeOut > 3) || (takeOut < 1))
						printf("Your number must be between 1 and 3!\n");
					else
						flag1 = 1;
				}
			}

			totalSticks = totalSticks - takeOut;
			printSticks(totalSticks);
			if (totalSticks == 0)
			{
				flag = 1;
			}
			else
				whoGoes = 'c';
		}

		// COMPUTER GOES
		if (whoGoes == 'c')
		{
			printf("Now its my turn...\n");
			takeOut = totalSticks % 4;
			if (takeOut == 0)
				takeOut = 1;
			printf("I will take out %d stick(s)!\n", takeOut);
			totalSticks = totalSticks - takeOut;
			printSticks(totalSticks);
			if (totalSticks == 0)
			{
				flag = 1;
			}
			else
				whoGoes = 'u';
		}
	}

	//Declare winner

	if (whoGoes == 'c')
	{
		printf("The computer won!\n");
	}
	else
		printf("You win!\n");
	return 0;
}