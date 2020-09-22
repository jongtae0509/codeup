/**************************************************************
4013번
jongtae0509
C
정확한 풀이코드 길이:344 byte(s)
수행 시간:0 ms
메모리 :1360 kb
****************************************************************/


#include<stdio.h>
#include<math.h>
int main(){
	int i;
	int a,aa;
    long binary;
    double bin_length, sum=0;
	scanf("%d",&a);
	aa=a;
    bin_length=log(a)/log(2)+1;
    for(i=0; i<bin_length ; i++)
    {
        binary=a%2;
        sum+=binary*pow(10, i);
        a=a/2;
    }
	
	printf("2 %0.f\n8 %o\n16 %X",sum,aa,aa);
}
