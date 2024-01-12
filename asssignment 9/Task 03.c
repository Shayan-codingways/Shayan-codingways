#include <stdio.h>

int main() {
    float arr[20],*ptr;
    int i;
    float max1, max2;

    // Read 20 float numbers from user
    printf("Enter 20 float numbers: ");
    for (i = 0; i < 20; i++) {
        scanf("%f", &arr[i]);
    }

    // Initialize pointer to the first element of the array
    ptr = &arr[0];

    // Find the largest number
    max1 = *ptr;
    for (i = 1; i < 20; i++) {
        if (*(ptr + i) > max1) {
            max1 = *(ptr + i);
        }
    }

    // Find the second largest number
    max2 = *ptr;
    for (i = 1; i < 20; i++) {
        if (*(ptr + i) > max2 && *(ptr + i) < max1) {
            max2 = *(ptr + i);
        }
    }
    printf("2nd highest number: %.2f\n", max2);

    return 0;
}
