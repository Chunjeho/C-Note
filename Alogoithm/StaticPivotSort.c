#include <stdio.h>

void indexAmount(int* arr, int num, int arrlen, int* same){
	int i = 0;
	
	for(i=0;i<arrlen;i++){
		if(arr[i] == num){
			(*same)++;
		}
	}
}

int quickSort(int* arr, int len, int num, int _arr[]){
	if(num > 0){
		int i = 0;
		int j = 0;
		int k = 0;
		int same = 0;
		
		int bigbuff[len];
		int smallbuff[len];
		
		int pivot = _arr[num];
		indexAmount(_arr, pivot, len, &same);
		//printf("pivot: %d, How many: %d\n", pivot, same);
		
		for(i=0;i<len;i++){
			if(arr[i]>pivot){ 
				bigbuff[j] = arr[i];
				j++;
			}
			else if(arr[i]<pivot){
				smallbuff[k] = arr[i];
				k++;
			}
		}
		
		for(i=0;i<k;i++){
			//printf("smallbuff[%d]: %d\n", i,smallbuff[i]);
		}
		
		for(i=0;i<j;i++){
			//printf("bigbuff[%d]: %d\n", i,bigbuff[i]);
		}
		
		for(i=0;i<k;i++){
			arr[i] = smallbuff[i];
			//printf("small; arr[%d]: %d\n", i, arr[i]);
		}
		
		for(i=k;i<k+same;i++){
			arr[i] = pivot;
			//printf("pivot; arr[%d]: %d\n", i, arr[i]);	
		}
		
		for(i=0;i<j;i++){
			arr[i+k+same] = bigbuff[i];
			//printf("big; arr[%d]: %d\n", i+k+same, arr[i+k+same]);	
		}
		
		/*for(i=0;i<len;i++){
			printf("%d\n", arr[i]);
		}*/
		
		num -= 1;
		
		quickSort(arr, len, num, _arr);
	}
	
	return 0;
}

int main(){
	int arr[] = {10,9,8,7,6,5,4,3,2,1,0,0,-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
	int _arr[] = {10,9,8,7,6,5,4,3,2,1,0,0,-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
	int len = sizeof(arr)/sizeof(int);
	int i = 0;
	
	quickSort(arr, len, len-1, _arr);
	
	printf("\n---Result---\n");
	for(i=0;i<len;i++){
		printf("%d\n", arr[i]);
	}
	
	return 0;
}
