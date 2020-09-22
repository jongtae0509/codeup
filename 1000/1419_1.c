/**************************************************************
1419번
jongtae0509
C
정확한 풀이코드 길이:246 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<string.h>

int main(){
	char str[101];
	fgets(str,100,stdin);
	int i,sum=0;
	for(i=0;i<strlen(str);i++){
		if(str[i]=='l'&&str[i+1]=='o'&&str[i+2]=='v'&&str[i+3]=='e'){
			sum++;
		}
	}
	printf("%d",sum);
}
