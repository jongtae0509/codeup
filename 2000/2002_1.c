/**************************************************************
2002번
jongtae0509
C
정확한 풀이코드 길이:269 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<string.h>
int main(){
	char s[21]={};
	int k,temp;
	scanf("%d %s",&k,s);
	int len=strlen(s),i;
	for(i=0;i<len;i++){
		temp=3*(i+1)+k;
		if(s[i]-temp>=65){
			s[i]-=temp;
		}
		else{
			s[i]+=26-temp;
		}
	}
	printf("%s",s);
}
