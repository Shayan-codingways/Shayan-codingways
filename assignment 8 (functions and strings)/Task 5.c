//task# 05

#include<stdio.h>
#include<string.h>

int Count_freq(int ch , int arr[ch]);

int main(){
	int ch,i;
	
	printf("Count frequency of each element of an array!\n_____________________________________________\n");
	
	printf("Input the number of elements to be stored in an array: ");
	scanf("%d", &ch);
	
	int arr[ch];
	printf("\nInput %d elements in an array: ", ch);
	
	srand(time(NULL)); // set seed
    for (i = 0; i < ch; i++) {
        arr[i] = rand() % 11; // random number between 0 and 10
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    Count_freq(ch , arr);
    
    
}

int Count_freq(int ch , int arr[ch]){
    
	int i,j,k,count, seen[ch],u;
	
	
	
    
    printf("\nFrequency of all elements of array are:");
	for(i=0;i<ch;i++){
		printf("\n");
		count=0;
		
	u=0;
		for(k=0;k<i;k++){
		    if(arr[i]==arr[k]){
		        u=1;
		    }
		}
		
		if(u!=1){ // if u==1 get to nxt i.
		
		    for(j=i+1;j<ch;j++){
		   
			    if(arr[i]==arr[j]){
		    	   count=count+1;
	     	    }
        	}
    	
         	printf("%d occured %d times",arr[i],count);
		}
    }

