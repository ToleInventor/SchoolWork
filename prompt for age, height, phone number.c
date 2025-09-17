//simple programm to prompt the user to enter height, phone number and their weight

/*
Name: Caxtone Kirigha Tole
Reg: CT100/G/26122/25
Description: A simple program to prompt the user to enter their height, phone number and weight
*/

//execution starts here
#include <stdio.h>
int main(){//main funaction

//variable creation for storing values
int height;//container for height
int number;//container for phone number
int weight;//container for weight


//main logic here
printf("enter your height below \n");
scanf("%d", &height);
printf("\n");
printf("enter your phone number below \n");
scanf("%d", &number);
printf("\n");
printf("enter your weight below \n");
scanf("%d", &weight);
printf("\n");
printf("%d %d %d \n", height, number, weight);
return 0;
}