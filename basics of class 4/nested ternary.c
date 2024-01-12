#include<stdio.h>

int main(){
	int a ,b, ans;
	
	// nested ternary operator
	
	printf("Enter a:");
	scanf("%d",&a);
	
	printf("\nEnter b:");
	scanf("%d",&b);
	
	ans = (a==10 ? (b==2 ? 3 :5) : 0);
	printf("\n\n%d", ans);
}
