/**************************************************************
1288번
jongtae0509
C
정확한 풀이코드 길이:398 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>

int main(){
	int n,r,i,j;
	scanf("%d %d",&n,&r);
	j=n-r;
	for(i=n-1;i>0;i--){
		n*=i;
	}
	for(i=r-1;i>0;i--){
		r*=i;
	}
	for(i=j-1;i>0;i--){
		j*=i;
	}
	if(r==0&&j==0){
		r=1;
		j=1;
		printf("%d",n/(r*j));
	}
	else if(j==0){
		j=1;
		printf("%d",n/(r*j));
	}
	else if(r==0){
		r=1;
		printf("%d",n/(r*j));
	}
	else{
	printf("%d",n/(r*j));
	}
	
}
