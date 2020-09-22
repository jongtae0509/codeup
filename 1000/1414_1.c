/**************************************************************
1414번
jongtae0509
C
정확한 풀이코드 길이:579 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main(){
	char string[101];
	scanf("%s",string);
	int C=0,CC=0;
	int c=99,cc=67;
	for(int i=0;i<101;i++){
		if(string[i]==0){
			break;
		}
		else if(string[i]==99||string[i]==67){
			C+=1;
		}
	}
	printf("%d\n",C);
	for(int i=0;i<101;i++){
		if(string[i]==0){
			break;
		}
		else if(string[i]==c&&string[i+1]==c){
			CC+=1;
		}
		else if(string[i]==cc&&string[i+1]==cc){
			CC+=1;
		}
		else if(string[i]==c&&string[i+1]==cc){
			CC+=1;
		}
		else if(string[i]==cc&&string[i+1]==c){
			CC+=1;
		}
	}
	printf("%d",CC);
} 
