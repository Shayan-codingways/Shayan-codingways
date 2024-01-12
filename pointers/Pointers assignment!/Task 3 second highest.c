/// Task 3 second highest 
#include<stdio.h>
int main(){

   int i,j;
    float arr[20]={2.0,15.6,18.6,2.3,2.0,9.8,23.5,23.3,19.8,84.6,77.8,45.4,67.5,56.7,65.7,9.9,8.7,7.7,6.7,67.7};
    float *ptr;
    float temp;
   
    ptr=arr;
   
    for ( i = 0; i < 20; ++i ){
   	    for(j=i+1; j<20 ;j++){
            if(*(ptr+i)<*(ptr+j)){
            	
				temp=*(ptr+i);
            	*(ptr+i)=*(ptr+j);
            	*(ptr+j)=temp;
            }
		}
    }
    printf( "2nd highest value is %f\n\n\n", *(ptr + 1) );

}
