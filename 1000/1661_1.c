/**************************************************************
1661번
jongtae0509
C
정확한 풀이코드 길이:362 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<string.h>
int main(){
	char s[101]={},s1[101]={};
	fgets(s,100,stdin);
	int k=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]!=' '){
			s1[k]=s[i];
			k++;
		}
	}
	for(int i=0;i<strlen(s1);i++){
		if(s1[i]==','){
			printf(" ");
		}
		else if(s1[i]==';'){
			printf("\n");
		}
		else{
			printf("%c",s1[i]);
		}
	}
}
