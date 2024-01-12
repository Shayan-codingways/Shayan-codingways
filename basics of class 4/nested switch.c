#include<stdio.h>
int main (){
  
    char c, e;
  
 
    printf ("Please say starting letter of a country; ");
     scanf (" %c", &c);

    printf("Enter Ending letter of a country's name; ");
    scanf(" %c", &e);
  
 
    switch(c){
        case 'A':
        case 'a':
      
        switch(e){
            case 'A':
            case 'a': 
            
            printf("\n  Alaska\n Algeria \nAlbania");
        }
    
	break;
	
    default:
        printf("\n No such country");
    }
    
	printf("\nEnd");
}
