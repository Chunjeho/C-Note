#include <stdio.h>

/*
print floating-point Fahrenheit-Celsius table
*/
main(){
	float f, c; 
	int min, max, step; //float means floating-point
	
	min = 0;
	max = 300;
	step = 20;
	
	f = min;
	while(f<=max){ // If operands are float and integer, integer will be converted to float before operation is done
		c = (5.0/9.0)*(f-32); // 5/9 becomes 0, but 5.0/9.0 and 32 automatically becomes 32.0
		printf("%.0f\t%.1f\n", f, c); // .n means n digits after decimal point
		f = f + step;
	}
}
