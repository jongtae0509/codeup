/**************************************************************
1283번
jongtae0509
C
정확한 풀이코드 길이:433 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>

int main(){
	int b,bb[201],c;
	double a,d;
	scanf("%lf",&a);
	d=a;
	scanf("%d",&b);
	for(int i=0;i<b;i++){
		scanf("%d",&bb[i]);
	}
	for(int i=0;i<b;i++){
		if(bb[i]<0){
			a*=-1;
			a=((a*bb[i])/100)+a;
			a*=-1;
		}
		else{
			a=((a*bb[i])/100)+a;
		}
	}
	printf("%.0lf\n",a-d);
	if(a-d>0){
		printf("good");
	}
	else if(a-d==0){
		printf("same");
	}
	else{
		printf("bad");
	}
}

