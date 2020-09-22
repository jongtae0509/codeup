/**************************************************************
4891번
jongtae0509
C
정확한 풀이코드 길이:248 byte(s)
수행 시간:0 ms
메모리 :1392 kb
****************************************************************/


#include<stdio.h>

int main(){
	int n,a[100000]={};
	
	scanf("%d",&n);
	int i,max=0,min=1000;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	} 
	printf("%d",max-min);
	
}
