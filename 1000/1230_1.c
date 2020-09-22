/**************************************************************
1230번
jongtae0509
C
정확한 풀이코드 길이:268 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a <= 170)
    printf("CRASH %d", a);
    else if(b <= 170)
    printf("CRASH %d", b);
    else if(c <= 170)
    printf("CRASH %d", c);
    else
    printf("PASS");
}
