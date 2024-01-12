#include<stdio.h>
int main(){

	float x;
	int z;
	float y;
	
	printf("Enter value of x:");
	scanf("%f", &x );
	
	z=x/3;
	printf("z is %d\n",z);
	
	y=x/3;
	printf("y is %f\n\n",y);
	
	
	
	if (y==z){
		printf("The number is multiple of 3\n");

	}
    if(y!=z){
		printf("The number is not a multiple of 3");
	}
	
}
