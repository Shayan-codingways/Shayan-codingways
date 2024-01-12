// TASK 07a b c

#include<stdio.h>
int main(){
	int x, y, z;

// doing 7a	
	x=7+3*(6/2)-1;
	// following the precdence and BODMAS:
	// brackets will be solved first
	// then division within the brackets will take place
	// the result2 will be multiplied with 3
	// then addition will happen 7+9
    // now subtraction of 1 will happen to result in 15
    printf("the value of x is: %d\n", x);
    
 
// doing 7b
   y= 2%2+2*(2-2)/3;
   // first of all brackets will be solved resulting in 0
   // then either of the two can happen. the remainder one or the division. 
   // eventually both will reuslt in 0.
   // finally 0+0 will still make it appear 0
    printf("the value of y is: %d\n", y);
    
// doing 7c
   z= (3*(9*(3+(9-3/(3)))));
   // first of all division of 3/3 will take place
   // secondly inner bracket will be solved to subtract 9-1 that results in 8.
   // then the next inner bracket leading to addition of 3 will take place thus, 8+3 will result in 11
   // after addition next inner bracket leading to multipication with 9 will take place; thus, 9*11 will result in 99
   // finally 99 will be multiplied by 3 to make it 297
   printf("the value of z is: %d", z);
   
    

	
}
