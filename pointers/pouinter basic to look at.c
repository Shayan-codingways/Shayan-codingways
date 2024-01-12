// Pointers

#include <stdio.h>
int main(){

    int *ptr = NULL; // pointer variable of type “pointer to int" / null pointer
    int intVariable1 = 10; 
    ptr = &intVariable1; // Pointer ptr now holds a memory address of intVariable

    // Print out associated memory addresses and their values
    printf("The memory address allocated to ptr at the time of its creation:%d \n",&ptr);
    printf("ptr is pointing to memory address or value contained in ptr:%d\n",ptr);
    printf("The memory address allocated to intVariable at the time of its creation:%d\n",&intVariable1);
    printf("The value contained in intVariable:%d\n" ,intVariable1);
    printf("ptr is pointing to the value:%d\n" , *ptr);
    
	printf("_________________________________________________________________________________"); 

 
    //Initialize an array of three elements
    int array[3] = {1,2,3},i; 
    printf("\nThe number of bytes in the array is %d\n", sizeof(array)); // ans 12
    
	ptr = array; // Assign memory address of arr to pointer just for 1st value at 0
    
	printf("The number of bytes in the ptr is %d\n", sizeof(*ptr)); //ans 4
    printf("\nThe total number of elements in the array is %d\n", sizeof(array)/sizeof(*ptr)); // ans 3
    
    // Print out associated memory addresses and their values
    printf("\nThe memory address allocated to array at the time of it's creation:%d\n", array); // array =address of array
    printf("ptr is now pointing to memory address array[0] or value now contained in ptr:%d\n",ptr);
    printf("\nThe value at array[0]:%d\n",*ptr);
    
    printf("_______________________________________________________________________________________");

    
	//Adds 4 to the value(address) contained in ptr i.e to address of array[0] and now contains the address of array[1]
    ptr++; 

    printf("\nptr is now pointing to memory address array[1] or value now contained in ptr:%d, %d\n",ptr,&array[1]);
    printf("\nThe value at array[1]:%d\n",*ptr);

    printf("_________________________________________________________________________________________");
    //Subtracts 4 from the value(address) contained in ptr i.e from address of array[1] and now contains the address of array[0]
    ptr--; 

    printf("\nptr is now pointing to memory address array[0] or value now contained in ptr:%d\n",ptr);
    printf("\nThe value at array[0]:%d\n",*ptr);
     
    printf("__________________________________________________________________________________________"); 
 
    //Adds 4 to the value(address) contained in ptr i.e to address of array[0] and now contains the address of array[2];
    ptr = ptr+2; 

    printf("\nptr is now pointing to memory address array[2] or value now contained in ptr:%d\n",ptr);
    printf("\nThe value at array[2]:%d\n",*ptr);
    
    printf("___________________________________________________________________________________________");

    
    ///////////////////////////////////////ARRAY DISPLAY//////////////////////////////////////////////////////
	
	// Displaying array using array subscript notation
    ptr = ptr - 2; // again back to arr[0]
 
    printf( "\nArray printed with:\nArray subscript notation\n" );
 
    for ( i = 0; i < 3; ++i ){
    printf( "array[%d] = %d\n", i,array[i]);
    }
    
    printf("___________________________________________________________________________________");

    
	// Displaying array using array name and pointer/offset notation
    printf( "\nPointer/offset notation where the pointer is the array name\n" );
    
	for ( i = 0; i < 3; ++i ){		 
    printf( "*( array + %d ) = %d\n", i, *(array + i) );
    }
    
    printf("____________________________________________________________________________________");
 

    // Displaying array using ptr and pointer/offset notation
 
    printf( "\nPointer/offset notation\n" );
    
	for ( i = 0; i < 3; ++i ){
   	printf( "*( ptr + %d ) = %d\n", i, *(ptr + i) );
    }
    
    printf("____________________________________________________________________________________");


    // Displaying array using ptr and array subscript notation
    printf( "\nPointer subscript notation\n" );
    
	for ( i = 0; i < 3; ++i ){
    printf( "ptr[ %d ] = %d\n", i,ptr[ i ]);
    }
}
