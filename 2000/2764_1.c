/**************************************************************
2764번
jongtae0509
C
정확한 풀이코드 길이:302 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<string.h>
int main(){
	char s[21]={};
	fgets(s,20,stdin);
	int i;
	printf("+");
	for(i=0;i<strlen(s);i++){
		printf("-+");
	}
	printf("\n|");
	for(i=0;i<strlen(s);i++){
		printf("%c|",s[i]);
	}
	printf("\n+");
	for(i=0;i<strlen(s);i++){
		printf("-+");
	}
}
