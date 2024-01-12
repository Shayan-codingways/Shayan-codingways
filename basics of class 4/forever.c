#include<stdio.h>

int main(){
    
    int num,count = 0;
    
    printf("PLEASE ENTER A NUMBER FOR COUNTING ITS DIGITS:\n");
    scanf("%d",&num);
    
    do{
        num=num/10;
        count=count+1;
        printf("\nThe value of count = %d",count);
    }while(num!=-1);//num is a number that is the result of
    //the current value stored in num divided by 10, since
    //num is postive, its value will never be negative!
    //hence the loop will never be stopped!
    
    printf("\nThe digits are: %d",count);
}
