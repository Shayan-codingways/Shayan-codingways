#include <stdio.h>

int swaped(int *aPtr, int *bPtr, int *cPtr);

int main()
{
    int a, b, c;

    printf("Enter the values of a, b, and c:\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    swaped(&a, &b, &c);

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}

int swaped(int *aPtr, int *bPtr, int *cPtr)
{
    int temp;

    temp = *bPtr;
    *bPtr = *aPtr;
    *aPtr = *cPtr;
    *cPtr = temp;
}


