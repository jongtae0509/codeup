/**************************************************************
2411번
jongtae0509
C
정확한 풀이코드 길이:323 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<string.h>

int main(){
	int n,i,f=0,m=0;
	char s[1001]={};
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		fgets(s,1000,stdin);
		for(int j=0;j<1000;j++){
			if(s[j]==','){
				if(s[j+1]=='F'){
					f++;
				}
				else{
					m++;
				}
				break;
			}
		}
	}
	printf("%d\n%d",m,f);
}
