//task 06

#include<stdio.h>

int main(){
	char grade;
	
	printf("Enter A,B,C,D,F respectively to know the range of marks each grade contains for any subject\n");
	scanf(" %c",&grade);
	
	if(grade=='A'){
		printf("\n\nThe range of marks for A are 92<A<=100");
		return 0;
	}
	if(grade=='B'){
		printf("\n\nThe range of marks for B are 85<B<=92");
	    return 0;
	}
	if(grade=='C'){
		printf("\n\nThe range of marks for C are 75<C<=85");
		return 0;
	}
	if(grade=='D'){
		printf("\n\nThe range of marks for D are 65<=D<=75");
		return 0;
	}
	if(grade=='E'){
		printf("\n\nThe range of marks for F are F<65");
		return 0;
	}
	
}
