// Assignment 4 - Question 2 File Write File
// Writes info to file  
// PROG71985 - 22F - Sec2 - Programming Principles
// Ryan Tu - Fall November 2022
// Version 1.0

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "taskStruct.h"

void fileWriter()
{
	FILE* fpointer1 = fopen("numEmptySeats.txt", "a");

	//if ((fpointer1 = fopen("numEmptySeats.txt", "r")) == NULL) {
	//	fpointer1 = fopen("numEmptySeats.txt", "a");
	//	// if file cannot be read, then create a new one in append mode 
	//}
	// attempted to check for existing file but program would not run with it

	for (int i = 0; i < ARRAYSIZE; i++) {
		if (taskArray[i].assigned == true) // file print out the seats that are occupied 
		{
		//	fprintf(fpointer1, "%d\n%s\n%s\n", taskArray[i].idNumber, seatsArray[i].firstName, seatsArray[i].lastName);
		}
	}

	fclose(fpointer1);

}
