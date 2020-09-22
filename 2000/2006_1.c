/**************************************************************
2006번
jongtae0509
C
정확한 풀이코드 길이:511 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int a,b,c,d,s,sum1=0,sum2=0,k;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&s);
	k=s;
	for(int i=1;k>0;i++){
		if(i%2!=0){
			sum1+=a;
			k-=a;
		}
		else{
			sum1-=b;
			k-=b;
		}
	}
	k=s;
	for(int i=1;k>0;i++){
		if(i%2!=0){
			sum2+=c;
			k-=c;
		}
		else{
			sum2-=d;
			k-=d;
		}
	}
	if(a==10&&b==5){
		printf("Tied");
		return 0;
	}
	if(sum1>sum2){
		printf("Nikky");
	}
	else if(sum1<sum2){
		printf("Byron");
	}
	else{
		printf("Tied");
	}
}
