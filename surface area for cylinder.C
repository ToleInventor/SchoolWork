//simple C program to compute surface area of a cylinder
/*
NAME: TOLE CAXTONE KIRIGHA
REG. NO: CT100/G/26122/25


*/
#include <stdio.h>//pre-processor directive 

//variable declaration 
float pi = 3.142857;
float r;
float h;

//main program here
int main(){
//prompt user imput
printf("enter the radius below: ");
scanf("%f", &r);
printf("enter the height below: ");
scanf("%f", &h);

//calculate volume

float a = (2*pi)*(r*r)+(2*pi)*(r*h);

printf("the surface area is: ");
printf("%f", a);

return 0;

}