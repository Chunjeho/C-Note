#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i = 0;
	int* p1 = (void*)0; /* int-type pointer p1 that can contain address
						  (void*)0 = NULL
						*/
	void* p2 = &i; //void pointer p2 is only for storing address of certain valuable; we can't deference
	
	p1 = malloc(sizeof(int)); //return type is void*; whatever the type of p2, we can freely use malloc()
	
	printf("%p", p2);
	
	return 0;
}
