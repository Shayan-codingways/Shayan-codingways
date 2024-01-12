#include <stdio.h>

int main(){
    
    int arr[5]={0,1,2,3,4};
    int *pointer;
    int i;
    
    for (i=0;i<5;i++){
        pointer[i]= arr[i];
       printf("The value stored at %p is: %d\n",pointer[i],pointer[i]); // %p dispalys address
    }
    
    printf("_______________________________________________________________________\n\n");
      
    
	for ( i = 0; i < 5; ++i ){		 
    printf( "*( arr + %d ) = %d\n", i, *(arr + i) );
    }
    
    
    printf("____________________________________________________________________________________\n");
 

	for ( i = 0; i < 5; ++i ){
   	printf( "*( pointer + %d ) = %d\n", i, *(pointer + i) );
    }
    return 0;
}
