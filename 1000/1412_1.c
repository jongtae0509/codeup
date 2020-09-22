/**************************************************************
1412번
jongtae0509
C
정확한 풀이코드 길이:284 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<string.h>

int main(){
	char str[91];
	fgets(str,90,stdin);
	int i,a[26]={};
	for(i=0;i<strlen(str);i++){
		if((int)str[i]>=97&&(int)str[i]<=122){
			a[(int)str[i]-97]+=1;
		}
	}
	for(i=0;i<26;i++){
		printf("%c:%d\n",(char)(97+i),a[i]);
	}
}
