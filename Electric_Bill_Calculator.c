/*
NAME: TOLE CAXTONE KIRIGHA
REG. NO: CT100/G/26122/25
DESC.: Simple C app with functions for calculating the electric bill for a given month
*/

//Simple C app with functions for calculating the electric bill for a given month

#include <stdio.h>//Pre processor directive

void calculateElectricBill(){
	float units;
	float bill;
	printf("Enter the number of units consumed below: \n");
	scanf("%f", &units);
	if(units<=100){
		bill = units*10;
	}else if(units>100 && units<201){
		bill = (100*10)+((units-100)*15);
	}else{
		bill = (100*10)+(100*15)+((units-200)*20);
	}
	printf("Your bill for this month is: %.2f", bill);
}

int main(){
	calculateElectricBill();
	return 0;
}
