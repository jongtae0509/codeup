/**************************************************************
1407번
jongtae0509
C
정확한 풀이코드 길이:191 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<string.h>
int main(){
	char str[101];
	int i;
	fgets(str,101,stdin);
	for(i=0;i<strlen(str);i++){
		if(str[i]!=' '){
			printf("%c",str[i]);
		}
	}	
	
}
