//A simple C program to calculate simple interest
/*
NAME: TOLE CAXTONE KIRIGHA
REG: CT100/G/26122/25
DESCRIPTION: program to calculate simple interest
*/

#include <stdio.h>//preprocessor directive

//declare our variables
float ammount;
float time;
float rate;
float interest;

//main program function
int main(){
	printf("Welcome!\n");
	printf("Enter amount deposited: \n");
	scanf("%f", &ammount);
	printf("Enter time of investment: \n");
	scanf("%f", &time);
	printf("Enter rate of interest: \n");
	scanf("%f", &rate);
	interest = ((ammount*time*rate)/100);
	printf("your interest so far is: ", interest);
	return 0;
}