// task 2

#include<stdio.h>
int IterativeBinToDec(int i);
int RecursiveBinToDec(int i);

int main(){
	int choice=1;
	int binary, decimal;
	
	while(choice!=3){
		
		printf("\n\n1. Choose IterativeBinToDec function to convert binary to decimal");
		printf("\n2. Choose RecursiveBinToDec function to convert binary to decimal");
		printf("\n3. Exit");
		
		printf("\n\nEnter your choice: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				printf("\n\t\tEnter Binary number: ");
				scanf("%d", &binary);
				decimal = IterativeBinToDec(binary);
				printf("\n\t\tDecimal equivalent using IterativeBinToDec function is: %d", decimal);
				break;
				
			case 2:
				printf("\n\t\tEnter Binary number: ");
				scanf("%d", &binary);
				decimal = RecursiveBinToDec(binary);
				printf("\n\t\tDecimal equivalent using RecursiveBinToDec function is: %d", decimal);
				break;
				
			default:
				return 0;
		}
	}
}

int IterativeBinToDec(int i){
	
	int j, z=1, y=1, a, decimal=0;
	
	for(j=i ; j>0 ; j=j/10){
		a = j % 10;
            if(z==1){
                y=y*1;
			}
            else{
                y=y*2;
			}

	   decimal = decimal + (a * y);
	   z++;
	}
	return decimal;
}

int RecursiveBinToDec(int i){
	if(i==0){
        return 0;
	 }
    else{
        return (i % 10 + 2 * RecursiveBinToDec(i / 10));
	}
}

