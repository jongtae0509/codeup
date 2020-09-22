/**************************************************************
4771번
jongtae0509
C
정확한 풀이코드 길이:251 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<string.h>
int main(){
	int sum=0,i;
	char g[51]={};
	fgets(g,50,stdin);
	for(int i=0;i<strlen(g);i++){
		if(g[i]==g[i+1]){
			sum+=5;
		}
		else{
			sum+=10;
		}
	}
	if(sum==380) sum+=10;
	printf("%d",sum);
}
