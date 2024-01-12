// task 06

#include<stdio.h>
int main(){
	
	//declare
	char a,b;
	
	//input and validate
	printf("Is it a weekday? Enter Y for yes, and N for No\n");
	scanf(" %c",&a);
		if(a!='Y' && a!='N'){
		printf("\nEnter again!");
		return 0;
     	}

	printf("\nAre you on a vacation? Enter Y for yes, and N for No\n");
	scanf(" %c",&b);
     	if(b!='Y' && b!='N'){
		printf("\nEnter both values again!");
		return 0;
     	}
	

	//decision block
	if(a=='N' && b=='N'){
		printf("\n\n\"True!\"");
	}
	else if(a=='Y' && b=='N'){
		printf("\n\n\"False!\"");
	}
	else if(a=='N' && b=='Y'){
		printf("\n\n\"True!\"");
	}
	else{
		printf("\n\n\"True!\"");
    }
}
