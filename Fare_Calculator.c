/*
NAME: TOLE CAXTONE KIRIGHA
REG. NO: CT100/G/26122/25
DESC.: Simple C app with functions for calculating fare for a given travel distance
*/

//Simple C app with functions for calculating fare for a given travel distance

#include <stdio.h>//Pre processor directive

float calculateFare(float dist){
	float dista = dist;
	float fare;
	fare = dista*50;
	return fare;
}

int main(){
	float dist;
	printf("Enter distance in km: ");
	scanf("%f", &dist);
	float fare = calculateFare(dist); 
	printf("Your fare is: %.2f", fare);
	return 0;
}
