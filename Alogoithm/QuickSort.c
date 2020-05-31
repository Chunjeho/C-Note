#include <stdio.h>
#include <stdlib.h>

int quickSort(int* arr, int len){
	
	int i = 0;
	int j = 0;
	int pivot = 0;
	int small = 0;
	int big = 0;
	int same = 0;
	int flag = 0;
	int from_to[] = {0,0};
	int* flag_arr = NULL;
	int* big_buff_arr = NULL;
	int* small_buff_arr = NULL;
	
	flag_arr = malloc(sizeof(int)*len);
	
	for(i=0;i<len;i++){
		flag_arr[i] = 0;
	} //initialize array
	
	while(1){
		
		i = 0;
		j = 0;
		small = 0;
		big = 0;
		same = 0;
		flag = 0;
		big_buff_arr = NULL;
		small_buff_arr = NULL;
		
		for(i=0;i<len;i++){
			if(flag_arr[i] == 0){
				pivot = arr[i];
				break;
			}
		}
		
		//printf("pivot: %d\n", pivot);
		
		from_to[0] = i;
		from_to[1] = i;
		
		for(j=i-1;j>=0;j--){
			if(flag_arr[j] == 0){
				from_to[0] -= 1;
			}
			else if(flag_arr[j] == 1){
				break;
			}
		}
		
		for(j=i+1;j<len;j++){
			if(flag_arr[j] == 0){
				from_to[1] += 1;
			}
			else if(flag_arr[j] == 1){
				break;
			}
		}
		
		//printf("index from:%d to:%d\n", from_to[0], from_to[1]);
		
		if(from_to[1] - from_to[0] < 1){
			//printf("---skip---\n");
			flag_arr[i] = 1;
		}
		
		else{
			for(i=from_to[0];i<=from_to[1];i++){
				if(arr[i] < pivot){
					small++;
				}
				else if(arr[i] > pivot){
					big++;
				}
			}
			
			//printf("small: %d, big: %d\n", small, big);
			
			small_buff_arr = malloc(sizeof(int)*small);
			big_buff_arr = malloc(sizeof(int)*big);
			
			small = 0;
			big = 0;
			
			for(i=from_to[0];i<=from_to[1];i++){
				if(arr[i] < pivot){
					small_buff_arr[small] = arr[i];
					//printf("small_buff_arr[%d]: %d\n", small, small_buff_arr[small]);
					small++;
				}
				else if(arr[i] > pivot){
					big_buff_arr[big] = arr[i];
					//printf("big_buff_arr[%d]: %d\n", big, big_buff_arr[big]);
					big++;
				}
				else if(arr[i] == pivot){
					same++;
				}
			}
			
			//printf("same: %d\n", same);
			
			for(i=0;i<small;i++){
				arr[i+from_to[0]] = small_buff_arr[i];
				//printf("arr[%d]: %d\n", i, arr[i]);
			}
			
			for(i=0;i<same;i++){
				arr[i+from_to[0]+small-1+1] = pivot;
				flag_arr[i+from_to[0]+small-1+1] = 1;
				//printf("arr[%d]: %d\n", i+from_to[0]+small-1+1, arr[i+from_to[0]+small-1+1]);
			}
			
			for(i=0;i<big;i++){
				arr[i+from_to[0]+small-1+1+same-1+1] = big_buff_arr[i];
				//printf("arr[%d]: %d\n", i+from_to[0]+small-1+1+same-1+1, arr[i+from_to[0]+small-1+1+same-1+1]);
			}
			
		}
		
		flag = 0;
			
		for(i=0;i<len;i++){
			//printf("flag_arr[%d]: %d\n", i, flag_arr[i]);
			if(flag_arr[i] == 1){
				flag++;
			}
		}
			
		free(big_buff_arr);
		free(small_buff_arr);
			
		if(flag == len-1){
			break;
		}
		
	}
	
	free(flag_arr);
	
	return 0;
}

int main(){
	
	int i = 0;
	int arr[] = {9,5,6,3,4,2,1,5,4,5,3,12,-76,-300,400,516,3,-1,-67,3,4,5,4,1,10,45,100,-23,-100};
	int len = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr, len);
	
	printf("-----Result-----\n");
	
	for(i=0;i<len;i++){
		printf("arr[%d]: %d\n", i,arr[i]);
	}
	
	return 0;
}
