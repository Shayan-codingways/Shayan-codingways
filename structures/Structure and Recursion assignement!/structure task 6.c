#include<stdio.h>

struct phone{
	int area;
	int exchange;
	int no;
};

int main(){
	
	struct phone number1={212,767,8900};
	struct phone number;
	
	
	puts("\nEnter area code");
	scanf("%d", &number.area);
	
	puts("\nEnter Exchange");
	scanf("%d", &number.exchange);
	
	puts("\nEnter area code");
	scanf("%d", &number.no);
	

    printf("\n\nMy number is = (%d) %d %d",number1.area,number1.exchange,number1.no);
    printf("\nYour number is = (%d) %d %d",number.area,number.exchange,number.no);
}
