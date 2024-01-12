// calloc

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i,*ptr,sum=0;
	
	printf("Enter num of elements: ");
	scanf("%d", &n);
	
	ptr=(int*)calloc(n,sizeof(int)); // size required
	
	if(ptr==NULL){ // ptr may turn null if reqd number of memory exceeds
		printf("ERROR! Memory not alloctaed");
		exit(0);
	}
	
	printf("Enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&*(ptr+i));
		sum+=*(ptr+i);
	}
	
	printf("Sum=%d",sum);
	//deallocating the memory.
	
	
	// freeing up memory
	free(ptr);
	
	ptr=(int*)calloc(2,sizeof(int)); // size required
	
	
	printf("\n\nEnter elements:");
	for(i=0;i<2;i++){
		scanf("%d",&*(ptr+i));
		sum+=*(ptr+i);
	}
	// now we have 2 integers memory
	printf("Sum=%d",sum);
	return 0;
}
