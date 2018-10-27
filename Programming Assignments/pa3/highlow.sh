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
	read -n 1 -s -r -p "Press any key to continue"
	echo
}

guess()
{
	guess=$((1 + RANDOM % $high))
	while true; do
	    read -p "Is your number $guess? `echo $'\n> '`" HLC
	    case $HLC in
	        [h]* ) high=$guess;break;;
	        [l]* ) low=$guess;break;;
			[c]* ) found=$guess;break;;
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
low=1
if [[ $1 -gt 2 ]];
then
	high=$1
	echo "Think of a number between 1 and $high (inclsuive)."
else
	high=100
	echo "Think of a number between 1 and $high (inclsuive)."
fi
anyKey

guess

echo "The range is now $low to $high"