#include <stdio.h>

main(){
	
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	printf("%s\t%s\n","Fahrenheit","Celsius");
	while(fahr <= upper){
		celsius = 5.0 * (fahr-32.0) / 9.0;
		printf("%3.0f\t%13.1f\n",fahr, celsius);
		fahr = fahr + step;
	}

}
