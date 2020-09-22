/**************************************************************
1067번
jongtae0509
C
정확한 풀이코드 길이:283 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<0)
    {
        printf("minus\n");
    }
    else
    {
        printf("plus\n");
    }
    if(a%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    
}
