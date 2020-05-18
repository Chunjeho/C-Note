#include <stdio.h>

#define MIN 0
#define MAX 300
#define STEP 20

main(){
	int f;
	
	for(f = MIN;f <= MAX;f += STEP)
		printf("%d\t%.1f\n", f, (5.0/9.0)*(f-32));
}
