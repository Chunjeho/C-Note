#include <stdio.h>

/*
print integer Fahrenheit-Celsius table
*/
main(){
	int f, c; //must be declared before we use it
	int min, max, step; //int means integer
	
	min = 0; // assignment statment
	max = 300;
	step = 20;
	
	f = min;
	while(f<=max){ //run until f<=max becames false
		c = 5*(f-32)/9; //If we calculate 5/9 first, it becomes 0 since c is integer
		printf("%d\t%d\n", f, c); //%d specifies an integer argument, \t means tab
		f = f + step;
	}
}
