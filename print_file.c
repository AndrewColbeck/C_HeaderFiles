// This File contains one of the functions
// referenced in the example Header File
// by Andrew Colbeck

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


void print_file (BANKEmployeePtr currentPtr)
{
	while (currentPtr != NULL)
	{
		//While loop to print the list in order
		printf("Name: %s \t Salary: %d\n", currentPtr->name, currentPtr->salary);
		currentPtr=currentPtr->next;
	}
};