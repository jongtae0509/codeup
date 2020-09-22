/**************************************************************
1045번
jongtae0509
C
정확한 풀이코드 길이:321 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
    unsigned int a, b,c;
    scanf("%u %u",&a,&b);
    c = a + b;
    printf("%u\n",c);
    c = a - b;
    printf("%u\n",c);
    c = a * b;
    printf("%u\n",c);
    c = a / b;
    printf("%u\n",c);
    c = a % b;
    printf("%u\n",c);
    printf("%.2lf\n",(double)a / b);
}
