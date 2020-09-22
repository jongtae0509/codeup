/**************************************************************
2762번
jongtae0509
C
정확한 풀이코드 길이:200 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<string.h>
int main(){
	char s[101];
	fgets(s,100,stdin);
	int i;
	printf("%c",s[0]);
	for(i=0;i<strlen(s);i++){
		if(s[i]==','){
			printf("%c",s[i+1]);
		}
	}
}
