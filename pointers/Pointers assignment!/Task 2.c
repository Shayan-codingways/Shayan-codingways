//task 2

#include<stdio.h>
int main(){

int n,i;
int arr[n];
int *ptr;

printf("how many elements you want in an array: ");
scanf("%d", &n);


for(i=0; i<n ;i++){

printf("enter values:");
scanf("%d",&arr[i]);

}


ptr=arr;

int sum =0;
for(i=0; i<n ;i++){
sum= sum+*(ptr+i);
}

printf("sum is %d",sum);

}
