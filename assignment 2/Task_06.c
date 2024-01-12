//task06

#include<stdio.h>

int main(){
	
	//declaration
	int tea_rate, hundred_notes, fifty_notes, ten_notes, five_notes, two_notes, one_notes;
	int remaining_amount, total_notes;
	int note=500;
	
	//enter rate of tea
	printf("The rate of cup of tea is: ");
	scanf("%d", &tea_rate);
	printf("\n");
	
	//remaining amount
	remaining_amount = note-tea_rate;
	printf("The remaining amount is: %d\n\n", remaining_amount);
	
	//notes a customer can get
	hundred_notes= remaining_amount / 100;
	printf("number of notes of 100 given are %d\n", hundred_notes);
	
	fifty_notes= (remaining_amount-(hundred_notes*100))/50;
	printf("number of notes of 50 given are %d\n", fifty_notes);
	
	ten_notes= (remaining_amount-(hundred_notes*100)-(fifty_notes*50))/10;
	printf("number of notes of 10 given are %d\n", ten_notes);
	
	five_notes= (remaining_amount-(hundred_notes*100)-(fifty_notes*50)-(ten_notes*10))/5;
	printf("number of notes of 5 given are %d\n", five_notes);
	
	two_notes= (remaining_amount-(hundred_notes*100)-(fifty_notes*50)-(ten_notes*10)-(five_notes*5))/2;
	printf("number of notes of 2 given are %d\n", two_notes);
	
	one_notes= (remaining_amount-(hundred_notes*100)-(fifty_notes*50)-(ten_notes*10)-(five_notes*5)-(two_notes*2));
	printf("number of notes of 1 given are %d\n\n", one_notes);
	
	total_notes= hundred_notes + fifty_notes + ten_notes + five_notes + two_notes + one_notes;
	printf("Total number of notes given are %d\n", total_notes);

}
