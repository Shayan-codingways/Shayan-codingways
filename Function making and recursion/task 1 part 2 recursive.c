// task1 part 2 recursive

#include<stdio.h>


int recursivesum(int x);

int main(){
	int z,y;
	y=9;
	z=recursivesum(y);
	printf("\nsum is %d", z);
}

int recursivesum(int x){
	int sum=0;
	
	if(x==1){
		return 1;
	}
	else{
		sum=x+recursivesum(x-1);
		return sum;
	}
	
	
}
