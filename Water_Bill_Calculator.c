//A simple C program to help with calculation of water bills at the end of the month.
/*
NAME: TOLE CAXTONE KIRIGHA
REG: CT100/G/26122/25
DESCRIPTION: A simple C program to help with calculation of water bills at the end of the month.
*/ 

#include <stdio.h>//preprocessor directive

//Declaring our variable
float Units;

//main function
int main(){
	float bill;
	printf("Enter number of water units consumed bellow: \n");
	scanf("%f", &Units);
	if(Units >= 0 && Units <= 30){
		bill = 20;
	}
	else if(Units >= 31 && Units <= 60)
	{
		bill = 25;
	}
	else if(Units > 60){
		bill = 30;
	}
	printf("Your Total water bill is: ");
	printf("%.2f", bill);
	return 0;	
}