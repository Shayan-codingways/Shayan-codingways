// task 6 in variable form

#include<stdio.h>

int main(){
	int x,y,z;
	
	printf("Enter 2 numbers to take input within [x-y]: ");
	scanf("%d %d",&x,&y);
    
    z=itera_sum(x, y);
    printf("\n\n%d\n",z);
    
    int j=recurse_sum(x,y);
    printf("%d",j);
    
}

int itera_sum(int x, int y){
	int i, sum=0;
	for(i=x; i<=y; i++){
		sum=sum+i;
	}
	return sum;
}

int recurse_sum(int x, int y){
	int sum=0;
	
	if(y==x){
		return x;
	}
	else{
		sum=y+recurse_sum(x,y-1);
		return sum;
	}
}

