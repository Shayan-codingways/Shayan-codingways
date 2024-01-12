#include <stdio.h>
#include <stdlib.h>

int arraySum(int *arr, int size);

int main(){
    int size, i, *arr;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    arr = (int*)malloc(size*sizeof(int));

    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    int sum = arraySum(arr, size);
    printf("The sum of the array is %d\n", sum);

    return 0;
}

int arraySum(int *arr, int size){
    int sum = 0, i; 
    
	for(i = 0; i < size; i++){
        sum = sum + *(arr + i);
    }
    
	return sum;
}
//A necessary note
//In main: &, & we use for calling
//And use * in fn's definition
