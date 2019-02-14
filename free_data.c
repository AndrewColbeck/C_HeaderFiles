// This File will free the Memory used to create
// Bank Employee Structs
// By Andrew Colbeck 2017

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void free_data (BANKEmployeePtr currentPtr)
{
	BANKEmployeePtr tempPtr;
	while (currentPtr != NULL)
	{
		//While loop to free memory of all links
		tempPtr = currentPtr;
		currentPtr = currentPtr->next;
		free(tempPtr);
	}
}