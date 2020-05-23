#include <stdio.h>
#include <stdlib.h> // for using malloc without Warning

int main(){
	
	int i = 0;
	int score = 0;
	int*student = NULL; // use pointer type to insert memory address; NULL means 'nothing' and this expression initiate student
	
	int n = 0;
	printf("the number of students: ");
	scanf_s("%d", &n); 
	
	student = malloc(n*sizeof(int)); // We need n students; allocate n*sizeof(int) size memory and return start address
	
	for(i = 0;i < n;i++){
		printf("Number %d student score: ", i+1);
		scanf_s("%d", &score);
		*(student+i)= score;
	}
	
	return 0;
}
