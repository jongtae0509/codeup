/**************************************************************
1470번
jongtae0509
C
정확한 풀이코드 길이:375 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
int main(){
	int n,i,j,num;
	num=1;
	int a[101][101]={};
	scanf("%d",&n);
	for(j=0;j<n;j++){
		if(j%2==0){
			for(i=0;i<n;i++){
				a[i][j]=num;
				num++;
			}
		}
		else{
			for(i=n-1;i>=0;i--){
				a[i][j]=num;
				num++;
			}
		}
	}
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

