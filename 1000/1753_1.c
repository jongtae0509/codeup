/**************************************************************
1753번
jongtae0509
C
정확한 풀이코드 길이:218 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<string.h>
int main(){
	int n,i,k;
	scanf("%d",&n);
	char a[101]={};
	for(i=0;i<n;i++){
		scanf("%s",&a);
		for(k=strlen(a)-1;k>=0;k--){
			printf("%c",a[k]);
		}
		puts("");
	}
}
