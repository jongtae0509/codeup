/**************************************************************
1675번
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
		if(a[i]=='a'){
			a[i]='x';
		} 
		else if(a[i]=='b'){
			a[i]='y';
		}
		else if(a[i]=='c'){
			a[i]='z';
		}
		else if(a[i]!=' '){
			a[i]-=3;
		}
	}
	for(int i=0;i<strlen(a);i++){
		printf("%c",a[i]);
	}
}
