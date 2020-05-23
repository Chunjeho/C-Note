#include <stdio.h>

void PiFraction(int* pi, int n){
	
	int i = 0;
	
	for(i = 0;i < n;i++){
		//printf("%d", pi[i]);
		printf("%d", *(pi+i));
	}
}

int main(){
	
	int pi[] = {1,4,1,5,9,2,6,5,3,5}; //fraction of pi
	int input;
	
	printf("Index (1~10):");
	scanf_s("%d", &input);
	
	PiFraction(pi, input);
	
	/*switch(input){
		
	case 1:	
		printf("%dst decimal point of pi is %d\n", input, *(pi+input-1));
		break;
	case 2:
		printf("%dnd decimal point of pi is %d\n", input, *(pi+input-1));
		break;
	case 3:
		printf("%drd decimal point of pi is %d\n", input, *(pi+input-1));
		break;
	default:
		printf("%dth decimal point of pi is %d\n", input, *(pi+input-1));
		break;
		
	}*/
	
	return 0;
}
