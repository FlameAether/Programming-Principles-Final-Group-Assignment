// Assignment 4 - Question 2 New Seat File
// Adds a customer to a seat number using user input 
// PROG71985 - 22F - Sec2 - Programming Principles
// Ryan Tu - Fall November 2022
// Version 1.0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "taskStruct.h"
#include <stdbool.h>

#define INTCHECK 1
#define EXITNUMBER -1
#define LOWERLIMIT -2
#define UPPERLIMIT 14



void addTask()
{
	int* taskNum = (int*)malloc(sizeof(int*));

	// asks for seat number requested + first/last name from user 

	printf("Enter Task Number (or -1 to quit): ");

	if (scanf("%d", taskNum) == INTCHECK) // checks if input is an int
	{
		if (*taskNum != EXITNUMBER && *taskNum >= 0 && *taskNum <= UPPERLIMIT) // checks if input is within bounds 
		{
			if (taskArray[*taskNum].assigned != true) // if seat is not occupied 
			{
				taskArray[*taskNum].id = *taskNum; // seat number assignment

				printf("Enter Task Description: ");
				scanf("%s", taskArray[*taskNum].element);

				taskArray[*taskNum].assigned = true;


				printf("Succesfully assigned task.\n");


			}
			else if (taskArray[*taskNum].assigned == true) // if user tries to get a seat that is already taken
			{
				printf("\nSorry, task number taken already!\n");
				return;
			}
		}
		if (*taskNum == EXITNUMBER) // if input = -1 (the number to abort operation)
		{
			printf("\nQuit!\n");
			return;
		}
		if (*taskNum <= LOWERLIMIT || *taskNum > UPPERLIMIT) // if input integer is out of bounds 
		{
			printf("\nPlease enter an integer between 0 and 14!\n");
			return;
		}

		free(taskNum);
	}

	else // if seat number input is invalid, such as char/string
	{
		printf("\nPlease enter an integer between 0 and 14!\n");
		return;
	}


}