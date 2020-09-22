/**************************************************************
5079번
jongtae0509
C
정확한 풀이코드 길이:289 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int v,i,a=0,b=0;
	char s[20]={};
	scanf("%d",&v);
	scanf("%s",s);
	for(i=0;i<v;i++){
		if(s[i]=='A'){
			a++;
		}
		else if(s[i]=='B'){
			b++;
		}
	}
	if(a>b){
		puts("A");
	}
	else if(a==b){
		puts("Tie");
	}
	else{
		puts("B");
	}
}
