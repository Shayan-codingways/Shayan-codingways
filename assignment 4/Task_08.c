//task08

#include<stdio.h>

int main(){
	
	char n;
	
	printf("                   !------National Earthquake Information Centre------!                ");
	
	printf("\n\nA, Richter scale value: 0<=n<5 \nB, Richter scale value: 5<=n<5.5\nC, Richter scale value: 5.5<=n<6.5\nD, Richter Scale Value: 6.5<=n<7.5\nE, Richter scale value: n>=7.5");

    printf("\n\nEnter category of Earthquake: ");
	scanf(" %c",&n);
	
	switch(n){
		case 'A':
			printf("      Little or no Damage!");
			break;
		case 'B':
			printf("      Little or no Damage!");
			break;
		case 'C':
			printf("\n    \"Some Damage\":walls may crack or fall!");
			break;
		case 'D':
			printf("\n    \"Disaster\": House and Buildings may collapse!");
			break;
		case 'E':
			printf("\n    \"Catastrophe\":most buildings destroyed!");
			break;
		}
	
	// WE cant do it directly from switch as case cant take conditions.
	
}
