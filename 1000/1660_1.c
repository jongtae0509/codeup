/**************************************************************
1660번
jongtae0509
C
정확한 풀이코드 길이:203 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<string.h>
int main(){
	char s[101];
	fgets(s,100,stdin);
	for(int i=0;i<strlen(s);i++){
		if(s[i]==','){
			printf(" ");
		}
		else{
			printf("%c",s[i]);
		}
	}
}
