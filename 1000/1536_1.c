/**************************************************************
1536번
jongtae0509
C
정확한 풀이코드 길이:325 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int n;

long long int d[110];


long long int f(){
    long long int a=d[1];
    for(int i=1 ; i<=n ; i++)
        if(a>d[i])
            a=d[i];
    return a;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%lld", &d[i]);

  printf("%lld", f());
  return 0;
}
