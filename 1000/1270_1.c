/**************************************************************
1270번
jongtae0509
C
정확한 풀이코드 길이:166 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main(){
	int count=0;
	int n,i;
	scanf("%d",&n);
	
	for(i=0;i<n+1;i++){
		if(i%10==1){
			count+=1;
		}
	}
	printf("%d",count);
}