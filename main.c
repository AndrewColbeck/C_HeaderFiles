//Week 9, Question 3 by Andrew Colbeck
//The Purpose of this Program is to create
//a Header File and split functions into separate files

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


//---------------------------------
//			** MAIN PROGRAM **
//---------------------------------

int main(){
	
	BANKEmployeePtr startPtr=NULL;
	BANKEmployeePtr newPtr;
	BANKEmployeePtr currentPtr;
	BANKEmployeePtr nextPtr;
	BANKEmployeePtr previousPtr;
	BANKEmployeePtr tempPtr;

	newPtr = (BANKEmployee*)malloc(sizeof(BANKEmployee));
	//Typecasts the malloc
	strcpy(newPtr->name, "Justin");
	newPtr->salary = 1000;
	newPtr->next = NULL;
	startPtr = newPtr;

	//-------------------------------
	//** INSERTS INTO FRONT OF LIST **
	//--------------------------------
	newPtr = (BANKEmployee*)malloc(sizeof(BANKEmployee));
	//Create a new Space for Sam
	strcpy(newPtr->name, "Sam");
	newPtr->salary = 2000;
	newPtr->next = NULL;
	startPtr->next = newPtr;

	//-------------------------------
	//** INSERTS INTO BACK OF LIST **
	//--------------------------------
	newPtr = (BANKEmployee*)malloc(sizeof(BANKEmployee));
	//Create a new Space for Antony (FRONT OF LINKED-LIST)
	strcpy(newPtr->name, "Antony");
	newPtr->salary = 200;
	newPtr->next=startPtr;
	//Links to start pointer, becomes the first link

	currentPtr=startPtr->next;
	startPtr=newPtr;

	newPtr = (BANKEmployee*)malloc(sizeof(BANKEmployee));
	//Create a new Space for Tony 
	strcpy(newPtr->name, "Tony");
	newPtr->salary = 300;
	newPtr->next = NULL;
	currentPtr->next = nextPtr;
	previousPtr = startPtr->next;

	newPtr = (BANKEmployee*)malloc(sizeof(BANKEmployee));
	//Create a new Space for Tony 
	strcpy(newPtr->name, "Peter");
	newPtr->salary = 400;	
	previousPtr->next=newPtr;
	newPtr->next=currentPtr;

	currentPtr=startPtr;

	print_file(currentPtr);

	currentPtr= startPtr;

	while (currentPtr != NULL)
	{
		//While loop to free memory of all links
		tempPtr = currentPtr;
		currentPtr = currentPtr->next;
		free(tempPtr);
	}

	return 0;
}