/**************************************************************
2082번
jongtae0509
C
정확한 풀이코드 길이:226 byte(s)
수행 시간:13 ms
메모리 :1392 kb
****************************************************************/


#include<stdio.h>
int main(){
	int n,k,a[100000],i;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]==k){
			printf("%d",i+1);
			return 0;
		}
	}
	printf("-1");
	
}
