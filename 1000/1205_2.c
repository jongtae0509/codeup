/**************************************************************
1205번
jongtae0509
C
정확한 풀이코드 길이:308 byte(s)
수행 시간:0 ms
메모리 :1308 kb
****************************************************************/


#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,k[8]={0},m=0;
	scanf("%lf %lf",&a,&b);
	k[0]=a+b;
	k[1]=a-b;
	k[2]=b-a;
	k[3]=a*b;
	k[4]=a/b;
	k[5]=b/a;
	k[6]=pow(a,b);
	k[7]=pow(b,a);
    for(int i=0;i<8;i++){
    	if(k[i] > m){
    		m=k[i];
		}
	}
	printf("%.6lf",m);
}

