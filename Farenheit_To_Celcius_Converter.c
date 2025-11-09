/*
NAME: TOLE CAXTONE KIRIGHA
REG. NO: CT100/G/26122/25
DESC.: Simple C app with functions for calculating temperature in degree Celsius from Fahrenheit
*/

//Simple C app with functions for calculating temperature in degree Celsius from Fahrenheit

#include <stdio.h>//Pre processor directive

float convertToCelsius(float temp){
	float tempf = temp;
	float tempd;
	tempd = (tempf-32)*(5.0/9.0);
	return tempd;
	
}

int main(){
	float temp;
	printf("Enter temperature in Fahranheit: ");
	scanf("%f", &temp);
	float tempd = convertToCelsius(temp); 
	printf("Your temperature in degree celcius is: %.2f", tempd);
	return 0;
}
