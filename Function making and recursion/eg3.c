#include<stdio.h>
// pass by value
//still with no affect

// definition
void swap(int var1, int var2){
    int temp;
    	temp=var1;
    	var1=var2;
    	var2=temp;
}

int main(){
	int x, y;
	
	x=35;
	y=24;
	
	printf("before swap: %d %d\n",x,y);
	
	// call function
	swap(x,y);
	
	printf("after swap %d %d", x,y);
}

