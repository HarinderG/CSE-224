#!/bin/bash

#############################################################################################################################
## Harinder Gakhal                                                                                                         ##
## CSE 224                                                                                                                 ##
## 10/24/2018                                                                                                              ##
## Programming Assignment 3                                                                                                ##
#############################################################################################################################

# Functions
anyKey() 	# Waits for user input
{
	read -n 1 -s -r -p "Press any key to continue."
	echo
}

# User will input h l or c, and the case will assign guess accordingly, otherwise ask again.
guess()
{	floor=$low
	ceiling=$high
	range=$(( $high - $low + 1))
	guess=$(( $floor + RANDOM % $range ))

	while true; do
	    read -n 1 -p "Is your number $guess? `echo $'\n> '`" HLC
	    case $HLC in
	        [h]* ) high=$guess; ((guessCount++)); break;;
	        [l]* ) low=$guess; ((guessCount++)); break;;
			[c]* ) found=$guess; break;;
	        * ) echo "Please answer (h) (l) or (c) (high, low or correct).";;
	    esac
	done
}

# Text formatting shortcuts
bold=$(tput bold)
normal=$(tput sgr0)

# Welcome message
echo "Welcome to the HighLow game!"
echo
echo "${bold}How to play the game:${normal}"
echo "You will think of a number."
echo "I will guess a number and you will let me know using the keyboard if the"
echo "number I guessed was too high ${bold}(h)${normal} or too low ${bold}(l)${normal}. If the number I guessed was correct, press ${bold}(c)${normal}."
echo 

# Check if arg was provided (User will not be able to choose <=2 since we are working with integers only)
found=0
low=1
guessCount=1
if [[ $1 -gt 2 ]];
then
	high=$1
	echo "Think of a number between 1 and $high (inclsuive)."
else
	high=100
	echo "Think of a number between 1 and $high (inclsuive)."
fi
anyKey

while [[ $found -eq 0 ]]; 
do
	guess
	echo "The range is now $low to $high"

	# If the user is cheating, exit game
	if [[ $high -le $low ]];
	then
		echo "I think you are cheating! Restart the game to try again."
		exit
	fi
done

# End of game
echo "I knew it!"
echo "It only took $guessCount tries."
echo "Thanks for playing!"
echo done