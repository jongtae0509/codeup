/**************************************************************
4076번
jongtae0509
C
정확한 풀이코드 길이:243 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int M,V,R;
	double mv;
	scanf("%d %d %d",&M,&V,&R);
	mv=(double)M/(double)V;
	printf("%.2lf ",mv);
	if(mv<R){
		printf("UP");
	}
	else if(mv==R){
		printf("STOP");
	}
	else{
		printf("DOWN");
	}
}
