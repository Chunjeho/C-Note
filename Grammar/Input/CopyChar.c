#include <stdio.h>

main(){
	int c; //use int since c must be big enough to hold EOF
	
	while((c = getchar()) != EOF){
		putchar(c);
		c = getchar();
	}
}
