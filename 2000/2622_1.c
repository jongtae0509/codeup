/**************************************************************
2622번
jongtae0509
C
정확한 풀이코드 길이:321 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int n,i,a[10000],max=0,min=100000,max1,min1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
			max1=i;
		}
		else if(a[i]<min){
			min=a[i];
			min1=i;
		}
	}
	printf("%d : %d\n%d : %d",max1+1,max,min1+1,min);
}
