/**************************************************************
2083번
jongtae0509
C++
정확한 풀이코드 길이:245 byte(s)
수행 시간:122 ms
메모리 :4908 kb
****************************************************************/


#include <stdio.h>
int main()
{
	int n,k;
	scanf("%d %d", &n,&k);
	int a[1000001]={};
	int f;
	for(f=0;f<n;f++){
		scanf("%d",&a[f]);
	}
	for(f=0;f<n;f++){
		if(a[f]==k){
			printf("%d",f+1);
			return 0;
		}
	}
	printf("-1");
}
