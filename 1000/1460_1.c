/**************************************************************
1460번
jongtae0509
C
정확한 풀이코드 길이:196 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	int i,j,n,c=1,a[100][100]={};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=c++;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}