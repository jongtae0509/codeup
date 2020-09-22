/**************************************************************
1413번
jongtae0509
C
정확한 풀이코드 길이:161 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<string.h>

int main(){
	char str[101];
	fgets(str,100,stdin);
	for(int i=strlen(str)-1;i>=0;i--){
		printf("%c",str[i]);
	}
}
