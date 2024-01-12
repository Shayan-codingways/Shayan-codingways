// Task 06

#include<stdio.h>

int iterativesum(){
	int i, sum=0;
	
	for(i=10; i<=15; i++){
		sum=sum+i;
	}
	return sum;
}

int recursivesum(int y){
	int sum=0;
	
	if(y==10){
		return 10;
	}
	else{
		sum=y+recursivesum(y-1);
		return sum;
	}
}

int main(){
	int x,z;
	
	
	printf("%d\n\n",iterativesum());
	
	z=15;
	x=recursivesum(z);
	printf("%d",x);
	
}
