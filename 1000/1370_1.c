/**************************************************************
1370번
jongtae0509
C
정확한 풀이코드 길이:288 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int h,r;
	scanf("%d %d",&h,&r);
	for(int i=0;i<r;i++){
		for(int j=0;j<h;j++){
			for(int k=0;k<j;k++){
				printf(" ");
			}
			puts("*");
		}
		for(int j=h-1;j>0;j--){
			for(int k=1;k<j;k++){
				printf(" ");
			}
			puts("*");
		}
	}
}
