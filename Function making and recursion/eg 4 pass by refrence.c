// pass by refrence against pass by value

#include<stdio.h>

// definition
void swap(int *var1, int *var2){
	// value swaping as pass by value dont work
	
    int temp;
    	temp=*var1;
    	*var1=*var2;
    	*var2=temp;
}

int main(){
	int x, y;
	
	x=35;
	y=24;
	
	printf("before swap: %d %d\n",x,y);
	
	// call function
	swap(&x,&y); // now as address is taken, value at address of x is of y and vice versa
	
	printf("after swap %d %d", x,y);
}

