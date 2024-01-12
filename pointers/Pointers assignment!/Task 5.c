//Task 5

#include<stdio.h>
int SortFunction(int *arr, int *size, int order){
	
	int i,j,temp;
	
	switch(order){
	
	case 1:
	for ( i = 0; i<*size; ++i ){
   	    for(j=i+1; j<*size ;j++){
            if(arr[i]<arr[j]){
            	
				temp=arr[i];
            	arr[i]=arr[j];
            	arr[j]=temp;
            }
		} 
    }
    return *arr,*size,order;
    break;
    
    case 2:
    	for ( i = 0; i < *size; ++i ){
   	    for(j=i+1; j<*size ;j++){
            if(arr[i]>arr[j]){
            	
				temp=arr[i];
            	arr[i]=arr[j];
            	arr[j]=temp;
            }
		} 
    }
    return *arr,*size,order;
    break;
    
    
}
}
    


int main(){
	int size,i;
	
	int order;
	
	printf("What's the size of array? ");
	scanf("%d", &size);
	fflush(stdin);
	
	int arr[size];
	
	for(i=0;i<size;i++){
	printf("Elements of array?");
	scanf("%d", &arr[i]);
    }
    fflush(stdin);
    
    printf("Select order: 1; for Decscending\n2; for Ascending\n");
    scanf("%d",&order);
    fflush(stdin);
    
    SortFunction(arr, &size, order);
    
	if(order==1){
	 printf("\n\n descending");
    	for(i=0;i<size;i++){
    		printf("  %d", arr[i]);
		}
    }
    
    if(order==2){
	 printf("\n\n Ascending");
    	for(i=0;i<size;i++){
    		printf("  %d", arr[i]);
		}
    }

}

