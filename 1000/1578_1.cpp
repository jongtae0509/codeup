/**************************************************************
1578번
jongtae0509
C++
정확한 풀이코드 길이:179 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int mymax(int a,int b){
    if(a>b) return a;
    else return b;
}
main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymax(a, b));
}
