// lab 5 task 1
#include<stdio.h>
int main(){
	
	// declare
	int num;
	int count=0; // takes it int to make sure number gets 0 finally
	
	//user enter number
	printf("Enter Number", num);
	scanf("%d", &num);
  
  //iterattive rule
  while(num!=0){
  	num=num/10;
  	count=count+1; // will show  number of digits
  }
  
  // display
  printf("The number of digits are %d", count);	
}
