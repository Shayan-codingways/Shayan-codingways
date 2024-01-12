// task 2

#include<stdio.h>
#include<math.h>
int IterativeBinToDec(int i);
//int RecursiveBinToDec(int i);

int main(){
	int choice=1,ans_iter, ans_recurse;
	int binary, decimal;
	
	printf("Binary number: ");
	scanf("%d",&binary);
	
	ans_iter=IterativeBinToDec(binary);
	printf("The decimal number is %d",ans_iter);
	
	ans_recurse=RecursiveBinToDec(binary);
	printf("\nThe decimal number is %d",ans_recurse);
	
	
}
int IterativeBinToDec(int i){
	
	int n=1, add=0,j;
	
	for(j=i;j>0; j=j/10){
		
		add=add+(pow(2,n-1)*(j%10));
		n=n+1;
	}
		return add;
}

int RecursiveBinToDec(int i){
	int z;

	if(i==0){
		return 0;
	}
	else{
		z=(i%10+2*RecursiveBinToDec(i/10));
		return z;
	}
}



