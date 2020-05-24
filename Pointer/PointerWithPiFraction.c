#include <stdio.h>

void PiFraction(int* p, int n){
	
	int i = 0;
	
	for(i = 0;i < n;i++){// p[i] does exactly same that *(p+i) does
		printf("%d\n", p[i]);
		printf("%d", *(p+i));
	}
}

int main(){
	
	int pi[] = {1,4,1,5,9,2,6,5,3,5}; //fraction of pi
	int input;
	
	printf("Index (1~10):");
	scanf_s("%d", &input);
	
	PiFraction(pi, input);
	
	return 0;
}
