/**************************************************************
1091번
jongtae0509
C
정확한 풀이코드 길이:183 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
int main(){
	
	long long int a,m,d,n,nn;
	scanf("%lld %lld %lld %lld",&a,&m,&d,&n);
	nn=n-1;
	for(int i=0;i<nn;i++){
		a=a*m+d;
	}
	printf("%lld",a);
	
}
