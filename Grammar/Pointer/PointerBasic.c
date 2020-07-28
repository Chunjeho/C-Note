#include <stdio.h>

int main(){
	int money = 10; // Computer recognize money as 4byte data from certain memory address
	int* p = &money; // integer pointer type (read 4 byte)
	
	printf("money address: %d, p address: %d\n", &money, &p); // money address: 6487580, p address: 64807568 
	printf("money address: %d, p value: %d\n",&money,p); // money address: 6487580, p value: 6487580
	printf("money value: %d, *p value: %d", money, *p); //money value: 10, p value: 10
}
