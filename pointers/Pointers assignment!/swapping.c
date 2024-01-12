#include<stdio.h>

int swapped(int *aptr, int *bptr, int *cptr);

int main(){
	int a,b,c;
	int *ptr;
	
	printf("enter values of a,b,c ");
	scanf("%d %d %d",&a,&b,&c);
	
	printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    swapped(&a, &b, &c);

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

	
}

int swapped(int *aptr, int *bptr, int *cptr){
	int temp;
	
	temp=*bptr;
	*bptr=*aptr;
	*aptr=*cptr;
	*cptr=temp;
	
	return *aptr,*bptr,*cptr;
}
