#include<stdio.h>

int main(){
    
    int num,count = 0;
    
    printf("PLEASE ENTER A NUMBER FOR COUNTING ITS DIGITS:\n");
    scanf("%d",&num);
    
    do{
        num=num/10;
        count=count+1;
    }while(num!=0);
    
    printf("\nThe digits are: %d",count);
}
