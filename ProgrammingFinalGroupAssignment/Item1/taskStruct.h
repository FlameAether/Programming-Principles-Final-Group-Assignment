// Final Group Assignment - Task Struct Header File
// PROG71985 - 22F - Sec2 - Programming Principles
// Ryan Tu - Fall November 2022
// Version 1.0

#pragma once

#include <stdio.h>
#include <stdbool.h>

#define MAXLEN 80
#define ARRAYSIZE 15

typedef struct task {
	int id;
	int day;
	int month;
	bool assigned;
	char element[MAXLEN];
}task;

task taskArray[ARRAYSIZE];



