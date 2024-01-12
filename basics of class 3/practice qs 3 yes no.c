#include<stdio.h>
int main(){

	char z;
	
	printf("Enter Y or N each of these respectively; \nAre you sure to delete?\n");
    scanf("%c",&z);
    
    // switch case
switch(z){
	case 'Y':
		printf("\n\"Deleted successfully\"\n");
		break;
	
	case 'N':
		printf("\"Delete cancelled\"\n");
		break;
		
	printf("/n");	
	default:
		printf("Enter valid operation\n");
}
	
}
