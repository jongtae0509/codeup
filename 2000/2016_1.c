/**************************************************************
2016번
jongtae0509
C
정확한 풀이코드 길이:465 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int n,t,k=1,j;
	char s[5000]={};
	scanf("%d %s",&n,s);
	t=n%3;
	int i;
	if(n<=3){
		printf("%s",s);
		return 0;
	}
	for(i=0;i<n;i++){
		printf("%c",s[i]);
		if(k==t){
			printf(",");
			break;
		}
		if(t==0){
			if(i==2){
				printf(",");
				break;
			}
		} 
		k++;
	}
	j=1;
	for(i=k;i<n;i++){
		printf("%c",s[i]);
		if(i==n-1){
			break;
		}
		if(j%3==0){
			printf(",");
			j=0;
		}
		j++;
	}
}
