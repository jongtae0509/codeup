/**************************************************************
1579번
jongtae0509
C++
정확한 풀이코드 길이:181 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>


int mymin(int a,int b){
    if(a>b) return b;
    else return a;
}
main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymin(a, b));
}
