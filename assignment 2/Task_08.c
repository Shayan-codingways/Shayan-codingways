#include<stdio.h>
int main(){

// declaring variable
int Num1, Num2, result1, result2, result3, result4;

// enter values of a b c
printf("Enter values of Num1 and Num2 :  ");
scanf("%d %d", &Num1, &Num2 );

// assigning operations
result1= (Num1>Num2);
result2=(Num1<Num2);
result3=(Num1==Num2);
result4=(Num1<=Num2);

//Display results
printf(" \"Num1>Num2is %d\" \n " ,result1);
printf("\"Num1<Num2is %d\" \n " ,result2);
printf("\"Num1==Num2 is %d\" \n " ,result3);
printf("\"Num1<=Num2 is %d\" \n " ,result4);
}
