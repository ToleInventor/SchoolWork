//A simple program for ATM withdrawal
/*
Name: TOLE CAXTONE KIRIGHA
Reg: CT100/G/26122/25
Description: A simple program for ATM withdrawal
*/

#include <stdio.h>//pre processor directive

//main function now

int main(){
	float ballance = 1000;
	float withdrawal;
	while(ballance > 0)
	{
		printf("enter the ammount to withdraw :\n");
		scanf("%f", &withdrawal);
		ballance = ballance - withdrawal;
		if(ballance < 0){
			printf("insufficient funds in your bank wallaet to withdraw: %f", withdrawal);
		}else{
			printf("you have withdrawn %f", withdrawal);
			printf("and your ballance is: %f\n", ballance);
		}
	}
	return 0;
}