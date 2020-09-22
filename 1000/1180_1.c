/**************************************************************
1180번
jongtae0509
C
정확한 풀이코드 길이:303 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
  
int main()
{
    int n, res;
   
    scanf("%d", &n);
     
    res = (n % 10 * 10) + (n / 10);
    res = res * 2;
    res = res % 100;
    printf("%d\n", res);
     
    if (res <= 50)
        printf("GOOD");
    else
        printf("OH MY GOD");
    return 0;
}
