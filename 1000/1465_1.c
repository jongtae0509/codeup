/**************************************************************
1465번
jongtae0509
C
정확한 풀이코드 길이:216 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	int n,m,k[100][100]={},i,j,c=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			k[i][j]=n*m-(m-1)-i*m+j;
			printf("%d ",k[i][j]);
		}
		printf("\n");
	}
}
