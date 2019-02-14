// This Header file will reference multiple functions
//  which are declared in separate files
// by Andrew Colbeck 2017

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//---------------------------------
//			** STRUCTURES **
//---------------------------------

struct bankEmployee {
	char name[20];
	int salary;
	struct bankEmployee *next;
};

typedef struct bankEmployee BANKEmployee;
typedef BANKEmployee *BANKEmployeePtr;


//---------------------------------
//			** PROTOTYPES **
//---------------------------------
void print_file (BANKEmployeePtr currentPtr);
void free_data (BANKEmployeePtr currentPtr);