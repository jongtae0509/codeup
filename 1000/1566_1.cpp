/**************************************************************
1566번
jongtae0509
C++
정확한 풀이코드 길이:241 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int a, n;
long long int pow(int a,int n){
    long long int r=1;
    if(a==1) return 1;
    else for(int i=0;i<n;i++) r*=a;
    return r;
}
int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld\n", pow(a, n));
}
