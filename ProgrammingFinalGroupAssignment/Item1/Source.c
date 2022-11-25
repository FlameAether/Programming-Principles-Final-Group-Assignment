// Assignment 4 - Question 2 Main Source File
// Colossus Airplane Seat Assigner 
// PROG71985 - 22F - Sec2 - Programming Principles
// Ryan Tu - Fall November 2022
// Version 1.0

#include <stdio.h>

#include "input.h"
#include "taskStruct.h"
#include "newTask.h"
#include "menuPrint.h"
#include "fileWriter.h"


#define SEATCAP 12

int main(void)
{
	int empty = SEATCAP;

	printf("^_^ Welcome To Colussus Airlines! ^_^\n\nPlease select from the following menu using the coresponding letter:\n\n");
	menuPrint();

	// ask user for input
	char userInput;
	userInputFunction(&userInput);


	while (userInput != 'f') { // will loop until user input = 'f'

		switch (userInput)
		{

		case 'a': // add task
		{
			addTask();
			menuPrint();
			break;
		}

		}

		userInputFunction(&userInput); // calls user input function
	}

	fileWriter(); // writes seats to file 
	printf("\nSaved to file\n");

	return 0;
}