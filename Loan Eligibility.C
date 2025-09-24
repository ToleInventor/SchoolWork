//Simple C programm to check loan eligibility
/*
NAME: TOLE CAXTONE KIRIGHA
REG. NO: CT100/G/26122/25
*/

#include <stdio.h>//pre-processor directive 

int age;
float income;

//main function comes here
int main(){
//prompt for user input
printf("enter your age below: ");
scanf("%d", &age);
printf("enter your annual income below: ");
scanf("%f", &income);

if (age < 20){
printf("Unfortunately, we are unable to offer you a loan at this time.");
}else{
if (income >= 21000){
printf("Congratulations you qualify for a loan");
}else{
printf("Unfortunately, we are unable to offer you a loan at this time.");
}
}
return 0;
}