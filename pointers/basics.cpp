#include <stdio.h>

int main()
{
    
    int a=5,b=7,sum;
    int *ptr1,*ptr,*ptr2;
    
    ptr1=&a; //ptr 1 now has address of a
    ptr2=&b; // ptr 2 has address of b
    ptr=&sum; // ptr has address of sum
    
    sum=*ptr1+*ptr2; // by refrencing ptr 1 has 5 ptr 2 has 7 and sum is now 12 
    
    printf("%d",*ptr); //ptr refrenced to give 12
    
    return 0;
}
