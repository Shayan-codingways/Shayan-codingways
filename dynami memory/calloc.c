// calloc by default has zero values
#include<stdio.h>
#include<stdlib>

int main(){
	float *ptr;
	ptr=(float*)calloc(5,sizeof(float));
	// float taken with calloc has 2 parameters.
	// 5 are the locations set for coming float values.
	
	for(i=0;i<5;i++){
		printf("%f\n",ptr[i]);
	}
	
	// prints default 0 values but for malloc it isn't the case.
}
