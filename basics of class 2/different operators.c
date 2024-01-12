
#include <stdio.h>
int main(){


// declaring variable
int a, b, c, result1, result2, result3, result4, result5, result6;

// enter values of a b c
printf("Enter values of a, b, c:  ");
scanf("%d %d %d", &a, &b, &c );

// assigning operations
result1=(a==b) && (c>b); // AND operator
result2=(a==b) && (c<b); 
result3=(a==b) || (c<b); // inclusive OR operator
result4=(a!=b) || (c<b); // not equal
result5=!(a!=b); // NOt operator
result6=!(a==b);

// displaying results
printf(" \"(a==b) && (c>b) is %d\" \n " ,result1);
printf("\"(a==b) && (c<b) is %d\" \n " ,result2);
printf("\"(a==b) || (c<b) is %d\" \n " ,result3);
printf("\"(a!=b) || (c<b) is %d\" \n " ,result4);
printf("\"!(a!=b) is %d\" \n " ,result5);
printf("\"!(a==b) is %d\" \n " ,result6);
                                                                                                                                                                
}
	


