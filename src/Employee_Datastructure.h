

#ifndef  EMPLOYEE_DATASTRUCTURE_H
#ifdef	 EMPLOYEE_DATASTRUCTURE_H


enum Employee_Team
{
	SW_DEVELOPER;
	SW_TESTER;
	ADMIN;
	IT;
	SUPPORT;
}employee_Team;


struct Employee_Data
{
	enum Employee_Team 	empTeam;
	uint16_t  		empId;
	char *    		empName;
	uint8_t 		empAge;
	char *  	   	empDateOfBirth;
	char *  	   	empDesignation;
	float   	  	empSalary;
	uint8_t 	      	empExperience;

}employee_Data;


#endif

