/**************************************************************
1276번
jongtae0509
C
정확한 풀이코드 길이:155 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
int main()
{
    int n,i,m;
    scanf("%d",&n);
    m=n;
    for(i=1;i<n;i++)
    {
        m*=i;
    }
    printf("%d",m);
}
