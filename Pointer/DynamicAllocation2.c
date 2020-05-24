#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char* p = NULL;
	int n = 0;
	
	printf("p: %p\n", p);
	printf("How many size you want?\n");
	scanf_s("%d", &n);
	
	p = malloc(n*sizeof(char)); //if memory doesn't have enough space, malloc returns NULL; 
								//p contains first allocated memory address
	
	printf("p: %p\n", p);
	
	if(p == NULL){
		printf("malloc error\n");
		
		printf("p: %p\n", p);
	}
	
	else{
		printf("confirm");
		
		printf("p: %p\n", p);
		
		free(p); /*deallocate p; p will deallocate when the program is ended, 
				  *but while you are executing program you need to deallocate p when it becomes useless
				  */
				  
		printf("p: %p\n", p); // Even if p is deallocated, address of p is remaining
		
		p = NULL; //initiate p to NULL to avoid error
		
		printf("p: %p\n", p);
	}			  	
	
	return 0;
}
