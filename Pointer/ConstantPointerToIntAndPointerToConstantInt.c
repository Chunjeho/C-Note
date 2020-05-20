#include <stdio.h>

int main(){
	
	int a = 3, b = 4, c = 5;
	
	int* const p1 = &a; // (*p1) can change, but not p1; p1(pointing something) is constant
	const int* p2 = &b; // p2 can change, but not (*p2); *p2(pointed by p2) is constant
	const int* const p3 = &c //Neither can change; p3(pointing something) and *p3(pointed by p3) is constant
	
	p1 = &b; //[Error] assignment of read-only variable 'p1'
	p2 = &c;
	p3 = &a; //[Error] assignment of read-only variable 'p3'
	
	*p1 = 4;
	*p2 = 5; //[Error] assignment of read-only location '*p2'
	*p3 = 3; //[Error] assignment of read-only variable '*p1'
	
	return 0;
}
