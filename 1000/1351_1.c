/**************************************************************
1351번
jongtae0509
C
정확한 풀이코드 길이:174 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int a,b,j,i;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++){
		for(j=1;j<=9;j++){
			printf("%d*%d=%d",i,j,i*j);
			printf("\n");
		}
	}
}
