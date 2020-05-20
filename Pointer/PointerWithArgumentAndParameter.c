#include <stdio.h>

void print1(char str1[]){
	/*
	str1[1] = 'a'//This will cause an error while executing program, if argument is charactor pointer type (Read-Only)
	*/
	printf("using print1: %s", str1); //%s wants initial address and str1 contains initial address
}

void print2(char* str2){
	/*
	str2[1] = 'a'//This will cause an error while executing program, if argument is charactor pointer type (Read-Only)
	*/
	printf("using print2: %s", str2); //%s wants initial address and, also, str2 contains initial address 
}

/*
	argument of print1 and print2 doing exactly same thing!
	i.e. char str[] = char* str (But, when it defines as parameter)
	
	char str[] as parameter is different with char str[] as valuable.
*/

int main(){
	char s[] = "Hello\n"; // We can edit "Hello, world!\n", which is actually {'H', 'e', ..., '\n'}
	char* p = "Hello\n"; // We can't edit "Hello, world!\n", which is located in read-only address
	
	s[1] = 'a';
	/*
	p[0] = 'a'; //There is no grammar issues, but when we are executing there is an error. It's an read-only data, we can't write on it.
	*/
	
	printf("p: %s\n", p);
	printf("s: %s\n", s);
	
	printf("*s: %c, s[0]: %c\n\n", *s, s[0]);
	printf("s: %d, &s: %d, &s[0]: %d\n\n", s, &s, &s[0]);
	
	printf("Print p using print1() and print2()\n");
	print1(p);
	print2(p);
	printf("\n");
	printf("Print s using print1() and print2()\n");
	print1(s);
	print2(s);
	
	return 0;
}
