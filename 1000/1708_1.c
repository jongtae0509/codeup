/**************************************************************
1708번
jongtae0509
C
정확한 풀이코드 길이:291 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>

int main()
{
	int n,a[1111],b[1111]={0},i,j;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++){
		for(b[i]=1,j=0;j<n;j++){
			if(a[i]<a[j]){
				b[i]++;
			}
		}
	}
	for(i=0 ;i<n; i++){
		printf("%d %d\n",a[i],b[i]);
	}
}