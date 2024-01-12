// task 03
# define size 6
#include<stdio.h>
#include<stdlib.h>


int main(){
	
	//declaration
	float x[size];
	int i=0;
	float sum=0;
	
	// Seed the random number generator with the current time
    // srand(time(NULL));
    
    //generating and displaying random numbers
    for (i = 0; i < 6; i++) {
        x[i] = (float)rand() / RAND_MAX;
        printf("\n\nArray elements are = %f", x[i]);
        sum += x[i];
    }
    
    // print sum and average
    printf("\n\nSum is = %f", sum);
    printf("\n\nAverage is = %f", sum/6);
    
    
}
