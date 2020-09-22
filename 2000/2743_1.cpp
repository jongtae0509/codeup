/**************************************************************
2743번
jongtae0509
C++
정확한 풀이코드 길이:539 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	bool du=0,na=0,gop=0,bbe=0;
	int a,b,c,d,e,check=0;
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d %d",&d,&e);
	if(a+b==c){
		du=true;
		check++;
	}
	if(a/b==c){
		na=true;
		check++;
	}
	if(a*b==c){
		gop=true;
		check++;
	}
	if(a-b==c){
		bbe=true;
		check++;
	}
	if(du==true){
		printf("%d ",d+e);
	}
	if(bbe==true){
		printf("%d ",d-e);
	}
	if(gop==true){
		printf("%d ",d*e);
	}
	if(na==true){
		printf("%d ",d/e);
	}
	if(du==0&&bbe==0&&gop==0&&na==0){
		printf("NO");
	}
}
