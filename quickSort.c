#include <stdio.h>

int quickSort(int* arr, int len, int num, int _arr[]){
	if(num > 0){
		int i = 0;
		int j = 0;
		int k = 0;
		
		int bigbuff[len];
		int smallbuff[len];
		
		int pivot = _arr[num];
	
		for(i=0;i<len;i++){
			if(arr[i]>pivot){ 
				bigbuff[j] = arr[i];
				j++;
			}
			else if(arr[i]<pivot){
				smallbuff[k] = arr[i];
				k++;
			}
			else{
				continue;
			}
		}
		
		for(i=0;i<k;i++){
			arr[i] = smallbuff[i];
		}
		
		arr[k] = pivot;
		
		for(i=0;i<j;i++){
			arr[i+k+1] = bigbuff[i];
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
	int arr[] = {9, -3, 5, 2, 6, 8, -6, 1, 3};
	int _arr[] = {9, -3, 5, 2, 6, 8, -6, 1, 3};
	int len = sizeof(arr)/sizeof(int);
	int i = 0;
	
	quickSort(arr, len, len-1, _arr);
	
	for(i=0;i<len;i++){
		printf("%d\n", arr[i]);
	}
	
	return 0;
}
