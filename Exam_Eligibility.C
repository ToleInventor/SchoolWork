//A simple C program to check for eligibility of a student to sit for the final exams
/*
NAME: TOLE CAXTONE KIRIGHA
REG: CT100/G/26122/25
DESCRIPTION: A simple C program to check for eligibility of a student to sit for the final exams
*/ 

#include <stdio.h>//preprocessor directive

//Declaring our variables
int Attendance;
float avgM;
//main function
int main(){
	printf("Enter the student attendance percentage below \n");
	scanf("%d", &Attendance);
	printf("Enter the student attendance percentage below \n");
	scanf("%f", &avgM);
	if(Attendance > 74 && avgM > 39){
		printf("You are eligible to do the exams");
	}
	else{
		printf("Not Eligible to do exams");
	}
	return 0;
}
