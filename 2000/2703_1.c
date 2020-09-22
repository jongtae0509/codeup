/**************************************************************
2703번
jongtae0509
C
정확한 풀이코드 길이:296 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int n,i,up=0,down=0;
	scanf("%d",&n);
	int h[10000];
	for(i=0;i<n;i++){
		scanf("%d",&h[i]);
	}	
	for(i=0;i<n;i++){
		if(i==n-1){
			break;
		}
		if(h[i]<h[i+1]){
			up++;
		}
		else if(h[i]>h[i+1]){
			down++;
		}
	}
	printf("%d %d",up,down);
}
