#include <stdio.h>
#include <string.h>

int main(){
	
	int i, j = 0;
	int num = 0; //signed maximum 2147483647; 2^0 + 2^1 + 2^2 ... 2^30; we count from 0 to 30
	int rem[31]; //int = 4 bytes = 32 bits
	             //initial bit for sign and then rest of them for integer
	printf("Decimal: ");
	scanf_s("%d", &num);
	
	if(num < pow(2, 99)){ // depends on size of rem array
		
		while(num > 0){
			rem[i] = num%2;
			num = num/2;
			i++;
		}
		
		for(j = i-1;j >= 0; j--){
			printf("%d", rem[j]);	
		}
		
	}
	
	else{
		printf("Overflow...\n");
	}
	
	return 0;
}
