#include<stdio.h>
#include<stdlib.h>

int main(){
	int *ptr;
	
	// made memory for 5 numbers
	ptr=(int*)calloc(5,sizeof(int));
	
	printf("Enter numbers:");
	for(i=0;i<5;i++){
		
		scanf("%d\n",&*(ptr+i));
		sum+=*(ptr+i);
	}
	
	//realloctaed to 8
	ptr=realloc(ptr,8); // memory turn to 8
	
	for(i=0;i<8;i++){
		scanf("%d\n",&*(ptr+i));
		sum+=*(ptr+i);
	}
	
	
}
