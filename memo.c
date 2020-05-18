#include <stdio.h>
#include <string.h>
/*
	Simple memo program
	Version 0.0.1
*/
void shiftleft(char* _memo, long len){// shift an array's elements left by one
	int i = 0;
	for(i = 1;i < len; i++){
		_memo[i-1] = _memo[i];
	}
	_memo[len-1] = '\0';
}

int main(){
	int c;
	int i = 0;
	char _memo[3000]; // You can write 3000 letters
	char _filename[100]; //Filename
	char _dir[200] = ""; // Directory you want to save file
	FILE *fptr;
	
	printf("File name: ");
	scanf_s("%s", _filename); // I thick this makes \n
	strcat(_dir, _filename); // Merge directory with filename  
	
	fptr = fopen(_dir,"w");
	if(fptr == NULL){ //When we can't open
		printf("Error!");
		return 0;
	}
	
	while((c = getchar()) != EOF){ //Get character until c becomes ^Z, which is EOF in Windows
		_memo[i] = c; //Save character in _memo array
		i++;
	}
	
	shiftleft(_memo, strlen(_memo)); // Because _memo[0] contains \n, which makes new line, so I shift it left to eliminate
	
	fprintf(fptr,"%s",_memo); //Write in file
	fclose(fptr); //Close the file
	
	return 0;
}
