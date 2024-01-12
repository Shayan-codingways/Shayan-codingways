#include<stdio.h>

int main(){
	
	// declaration
	int row,col,cols,rows,i,j;
	
	// taking dimensions
	printf("Enter rows and cols of 1st matrix: ");
	scanf("%d %d",&row,&col);
	
	int mat1[row][col];
	
	printf("\nEnter rows and cols of 1st matrix: ");
	scanf("%d %d",&rows,&cols);
	
	int mat2[rows][cols];
	
	// validation
	if(col!=rows){
	    puts("Inapproptiate size for multipication");
		return 0;
	}
	
	
	Recursive_multipication(row,col,rows,cols);
   
}


int Recursive_multipication(int a, int b, int c, int d ){
	int i,j;
	int mat1[a][b];
	int mat2[c][d];
	
	// taking matrices
	puts("\nEnter elements of 1st matrix: ");
	for(i=0;i<a;i++){
		for(j=0;j<b; j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	
	puts("\nEnter elements of 2nd matrix: ");
	for(i=0;i<c;i++){
		for(j=0;j<d; j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	
	//displaying matrix
	puts("\n 1st matrix: ");
	for(i=0;i<a;i++){
		for(j=0;j<b; j++){
			printf(" %d",mat1[i][j]);
		}
		puts("\n");
	}
	
	puts("\n 2nd matrix: ");
	for(i=0;i<c;i++){
		for(j=0;j<d; j++){
			printf(" %d",mat2[i][j]);
		}
		puts("\n");
	}
	
	i=0;
	int k=0;
	j=0;
	int mat3[a][d];
	
	if(i>=a){
		return;
	}
	else if(i<a){
		
		if(j<b){
			if(k<c){
				mat3[i][j] += mat1[i][k] * mat2[k][j];
				k++;
				Recursive_multipication(a,b,c,d);
			}
			k=0;
			j++;
			Recursive_multipication(a,b,c,d);
		}
		j=0;
		i++;
		Recursive_multipication(a,b,c,d);
	}
	
	
    for (i = 0; i < a; i++){
        for (j = 0; j < d; j++){
            printf("%d  ", mat3[i][j]);
        }
        printf("\n");
    }
}
