#include <stdio.h>



int main() {
    int arr[100], size, order, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    printf("Enter the order in which to sort the array (1 for ascending, 2 for descending): ");
    scanf("%d", &order);
    
    Sorting(arr, size, order);
    
    printf("Sorted array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}

void Sorting(int* arr, int size, int order) {
    

    }
}
