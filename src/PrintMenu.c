
#include <stdio.h>
#include <stdlib.h>
#include "Employee_Datastructure.h"


void printMenu()
{
	int choice;
        
	do {
		printf("\nPress 1. Update Employee Data:\n");
		printf("  Press 2. Print  Employee Data:\n");
	        printf("  Press 3. exit");

	        switch (choice) {

			case 1 : {    
			        	struct Employee_list * node = ReadEmployeeData();
			                break;
	                	 }
			case 2 : {
				        PrintEmployeeData();
			         }		
	                case 3 : exit(0);	

		        default : printf("\nINVALID INPUT\n");	
	       }
	  }while(1);	
}
