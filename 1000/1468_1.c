/**************************************************************
1468번
jongtae0509
C
정확한 풀이코드 길이:373 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
int main(){
	int n,i,j,num;
	num=1;
	int a[101][101]={};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i%2==0){
			for(j=0;j<n;j++){
				a[i][j]=num;
				num++;
			}
		}
		else{
			for(j=n-1;j>=0;j--){
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
