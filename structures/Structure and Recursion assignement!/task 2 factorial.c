// factorial function task 2.
#include<stdio.h>
int main(){
	int n;
	 
	puts("enter n value: ");
	scanf("%d", &n);
	 
	printf("%d",Fact(n));
	 
}

int Fact(int n){
	if(n==0){
		return 1;
	}
	else{
		return n*Fact(n-1);
	}
}
