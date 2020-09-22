/**************************************************************
1294번
jongtae0509
C
정확한 풀이코드 길이:349 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<string.h>

int main(){
	char a[201];
	fgets(a,201,stdin);
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='x'){
			a[i]='a';
		} 
		else if(a[i]=='y'){
			a[i]='b';
		}
		else if(a[i]=='z'){
			a[i]='c';
		}
		else if(a[i]!=' '){
			a[i]+=3;
		}
	}
	for(int i=0;i<strlen(a);i++){
		printf("%c",a[i]);
	}
}
