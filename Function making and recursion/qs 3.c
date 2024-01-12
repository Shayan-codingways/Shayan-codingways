#include<stdio.h>
int Recursive_Count(int i);

int main(){
	int num, occurence;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	occurence = Recursive_Count(num);
	printf("\nThe count of the occurences is = %d", occurence);
}

int Recursive_Count(int i){
	if(i<1){
		return 0;
	}
	if((i%10)==5 && ((i / 10) % 10)==5){
		return(2 + Recursive_Count(i / 10));
	}
	else if((i%10)==5){
		return(1 + Recursive_Count(i / 10));
	}
	else{
		return(Recursive_Count(i / 10));
	}
}

