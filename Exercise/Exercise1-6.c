#include <stdio.h>
main(){
	//EOF = Ctrl + Z in Windows
	printf("%d", getchar() != EOF);
}
