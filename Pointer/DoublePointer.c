#include <stdio.h>

int main(){
	
	int arr[2][2] = {{11, 7},
					 {3, 20}};
	
	printf("arr: %d, arr[0]: %d, *arr: %d, &arr[0][0]: %d\n", arr, arr[0], *arr, &arr[0][0]); //address of arr[0][0]
	printf("arr+1: %d, arr[1]: %d, *(arr+1): %d, &arr[1][0]: %d\n", arr+1, arr[1], *(arr+1), &arr[1][0]); //address of arr[1][1]
	printf("arr[0][1]: %d, arr[1][1]: %d\n", *(*(arr)+1), *(*(arr+1)+1));
	
	return 0;
}
