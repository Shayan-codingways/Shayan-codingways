// task_10

#include<stdio.h>
int main(){
	
	
	
	//variables declared
	int code=141;
	int ec,nc,rc;
	
	
	// enter the current code
	printf("\nEnter the current code: ");
	scanf("%d", &ec);
	
	
	// decision block. if true enter new one and also enter fopr verification
	if(ec==code){
		printf("\nEnter a new Pin code: ");
		scanf("%d",&nc);
		
		printf("\nEnter the code again: ");
		scanf("%d",&rc);
	}
	
	
	
	// if code isn't equals the input then display wrong
	if (ec!=code){
		printf("\n\nYou doesn't seems to be the owner of this smartphone!");
	}
	
	
	// chk for verification and store the new code.
	if(nc!=rc){
		printf("\n\nWrongly entered!");
	}
	else{
		code=nc;
	}
	
}
