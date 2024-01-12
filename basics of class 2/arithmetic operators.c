
#include <stdio.h>

int main() {
    int a=9, b=4, sum, sub, mult, remainder, inc1, inc2;
    float xy=9 ,wz = 4;
    float div;

sum=a+b;
sub=a-b;
mult=a*b;
div=xy/wz;
remainder=a%b;
inc1= ++a; // increnment by 1
inc2= --a; // decrements newly stored value in 15 by 1



printf("sum value is %d\n",sum);
printf("sub value is %d\n",sub);
printf("mult value is %d\n",mult);
printf("div value is %f\n",div);
printf("remainder value is %d\n",remainder);
printf("inc1 value is %d\n",inc1);
printf("\ninc2 value is %d\n",inc2);
    

}
