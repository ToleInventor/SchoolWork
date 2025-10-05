//Simple program to prompt for user to input password and check against the one registered in the system
/*
NAME:
REG:
DESCRIPTION: Simple program to prompt for user to input password and check against the one registered in the system
*/

#include <stdio.h>
//main program body here

int main()
{
	int pass;
	do{
		
		printf("Enter the password: \n");
		scanf("%d", &pass);
		if(pass == 1234){
			printf("Access Granted");
		}else
		{
			printf("Password Incorrect\n");
		}
	}while(pass != 1234);

	return 0;
}