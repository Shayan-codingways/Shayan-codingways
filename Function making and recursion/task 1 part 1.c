//Task1 iterative

#include<stdio.h>

int iterativesum();

int main(){
	int z,y;
	z=iterativesum();
	printf("\nsum is %d", z);
}

int iterativesum(){
	int i,sum=0;
	
	for(i=1;i<10;i++){
		printf("%d",i);
		
		if(i<9){
		printf("+");
	    }
		
		sum=sum+i;
	}
	
	return sum;
}

