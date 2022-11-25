// Assignment 4 - Question 2 Delete Seat Function File
// Takes in user input to delete desired seat number
// PROG71985 - 22F - Sec2 - Programming Principles
// Ryan Tu - Fall November 2022
// Version 1.0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "taskStruct.h"
#include <stdbool.h>
#include <stdlib.h>

#define INTCHECK 1
#define EXITNUMBER -1
#define LOWERLIMIT -2
#define UPPERLIMIT 14
#define LOWESTSEAT 0


void deleteSeat()
{
	printf("Please enter seat number to be deleted (or -1 to quit): ");

	int* seatNum = (int*)malloc(sizeof(int));

	if (scanf("%d", seatNum) == INTCHECK) // check return value to see if an int was entered
	{
		if (*seatNum != EXITNUMBER && *seatNum >= LOWESTSEAT && *seatNum <= UPPERLIMIT)
			// if the user input is not equal to our exit number and is within our seat number count (seats 0-11)
		{
			if (taskArray[*seatNum].assigned == true) { // checks if seat is occupied

				//taskArray[*seatNum].firstName == '\0';
				//taskArray[*seatNum].lastName == '\0'; // resets names to null 

				taskArray[*seatNum].assigned = false; // deassign the seat

				printf("\nSeat has been successfully deleted.");


			}
			else if (taskArray[*seatNum].assigned != true) // if the user tries to delete seat that is already empty
			{
				printf("\nSeat is already empty!\n");
				return;
			}
		}
		if (*seatNum == EXITNUMBER) // if user input is equal to -1 (the number to quit)
		{
			printf("\nQuit!\n");
			return;
		}
		if (*seatNum <= LOWERLIMIT || *seatNum > UPPERLIMIT) // if user input is out of bounds 
		{
			printf("\nPlease enter an integer between 0 and 11!\n");
			return;
		}
		free(seatNum);
	}

	else // any other input that is an invalid seat number, such as a char/string 
	{
		printf("\nPlease enter an integer between 0 and 11!\n");
		return;
	}

}
