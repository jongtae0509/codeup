/**************************************************************
5080번
jongtae0509
C
정확한 풀이코드 길이:287 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main(){
	int n,a[16],b[16],i,re_a=100,re_b=100;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>b[i]){
			re_b-=a[i];
		}
		else if(a[i]<b[i]){
			re_a-=b[i];
		}
	}
	printf("%d\n%d",re_a,re_b);
}
