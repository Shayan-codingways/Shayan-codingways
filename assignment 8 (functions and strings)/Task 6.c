// task 06

#include<stdio.h>
int getData (int h, int a); // prototype
int volumeCalu (int h,int a); // prototype

int main(){
	int h,a, vol;
	
	getData(h,a);
	
	printf("%d",volumeCalu(h,a));
}

int getData (int h, int a){
	
	printf("\n\nEnter the value of h: ");
	scanf("%d", &h);
	
	printf("\n\nEnter the value of a: ");
	scanf("%d", &a);
	
	
	volumeCalu(h,a);
	
	
}

int volumeCalu(int h,int a){
	
	int volume;	

	volume=1/3.0 * h * a * a;
	
	printf("\n\n%d",volume);
	
	return volume;
}
