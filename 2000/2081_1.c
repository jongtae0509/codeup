/**************************************************************
2081번
jongtae0509
C
정확한 풀이코드 길이:179 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
int main(){
	int a[10],i,max=0,t;
	for(i=0;i<9;i++){
		scanf("%d",&a[i]);
		if(a[i]>max){
			max=a[i];
			t=i+1;
	    }
	}
	printf("%d\n%d",max,t);
}
