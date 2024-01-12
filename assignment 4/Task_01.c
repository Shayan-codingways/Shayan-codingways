// task_01

#include<stdio.h>

int main(){
	
	// declared variables
	int x;
	
	int lastdigit,db, rest,z;
	int a,b,c,d;
	int e,f,g,h;
	int i, j,k,l;
	
	// input value of x
	printf("Enter value of x: ");
	scanf("%d", &x);
	
	// first assignment
	
	    lastdigit=x%10;
	    db=lastdigit*2;
	    rest= x/10;
	    z= rest-db;
	
	
	if(z==7 || z==-7 || z==0){ // if true direcly print X.
		printf("\nX. is divsible by 7");	
    }
    
	else if(z!=7||z!=-7||z!=0){ // else move onto nxt assignment
	
	    a=z%10;
	    b=a*2;
	    c=z/10;
	    d=c-b;	    
	    
	if(d==7||d==-7 || d==0){  // if nxt assignment true then print X..
		printf("\nX.. is divsible by 7");	
	}

	
	else if(d!=7||d!=-7||d!=0){ //if false move onto nxt assignment
	
	    e=d%10;
	    f=e*2;
	    g=d/10;
	    h=g-f;
	    
	    
	if(h==7||h==-7 || h==0){   // nxt assignmnment true so print X...
		printf("\nX... is divsible by 7");	
    }

    
	else if(h!=7||h!=-7||h!=0){ // nxt assignment applied
	
	    i=h%10;
	    j=i*2;
	    k=h/10;
	    l=k-j;
	    
	if(l==7||l==-7 || l==0){  //if true print
		printf("\nX.... is divsible by 7");	
    }
    
    else{
	printf("\nX isn't divisible by 7 or may be requiring more steps to verify");
    }
      
    } 
    }   
    }


}



	
