/**************************************************************
1901번
jongtae0509
C
정확한 풀이코드 길이:283 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
 
void a(int start, int count);
 
int main()
{
    int n;
    scanf("%d", &n);
    a(1,n);
}
void a(int start, int count)
{
    if (start > count)
        return;
    else
    {
        printf("%d\n", start);
        a(start + 1, count);
    }
}
