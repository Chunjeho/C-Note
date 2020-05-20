#include <stdio.h>

main(){
	double nc; //float type
	
	for(nc = 0;getchar() != EOF;++nc){ // check there is EOF
		; // null statement
	}
	printf("%.0f\n", nc); // 0th decimal point, which is fraction part
}
