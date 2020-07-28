/*
	Use preprocesser in simple way.
	It's not smart as you thought.
*/

#include <stdio.h>
#include "pre.h" // User path

// #define <name> <value>
#define PI 3.141592 // constant
#define E 2.718281828
#define DEBUG 0
#define OS 5

int main(){
	
	int num = 0;
	
	num = add(2,3); //function which is in pre.h
	
	printf("pi: %lf\n", PI);
	printf("e: %lf\n", E);
	printf("sum: %d\n", num);
	
#ifdef DEBUG //if DEBUG is predefined, execute code below until #endif
	printf("Debug-mode: yes\n");
#else
	printf("Debug-mode: no\n"); //else execute code below
#endif //end
	
#if OS == 0 //we can use #if as if-statement in C
	printf("Windows\n");
#elif OS == 1 //we use #elif, not #elseif
	printf("Linux\n");
#elif OS == 2
	printf("MacOS\n");
#elif OS == 3
	printf("IOS\n");
#elif OS == 4
	printf("Android\n");
#else
	printf("UNIX\n");
#endif	

	return 0;
}
