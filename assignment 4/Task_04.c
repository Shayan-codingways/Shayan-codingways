// task04

#include<stdio.h>

int main(){
	
	float nts, fsc;
	
	printf("Enter Fsc marks out of 100: ");
	scanf("%f", &fsc);
	
	printf("Enter NTS marks out of 100: ");
	scanf("%f", &nts);
	
	
	// oxford university prg
	if(nts>=70 && fsc>70){
	   printf("\nCongrats! You are in for IT program in Oxford University");
	}
	else if(nts>=60 && fsc>70){
	   printf("\nCongrats! you are in for Electronics program in Oxford University");
	}
	else if(nts>=50 && fsc>70){
	printf("\nCongrats! you are in for Telecommunication program in Oxford University");
	}
	
	// MIT prg
	if(nts>=50 && fsc<=70 && fsc>=60){
	   printf("\nCongrats! You are in for IT program in MIT University");
	}
	else if(nts>=50 && fsc<=59 && fsc>=50){
	   printf("\nCongrats! you are in for Electronics program in MIT University");
	}
	else if(nts>=50 && fsc>40 && fsc<50){
	printf("\nCongrats! you are in for Telecommunication program in MIT University");
	}
}
