/**************************************************************
1542번
jongtae0509
C
정확한 풀이코드 길이:264 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int n;



int f()
{
	for(int i=2; i<n; i++){
        if(n%i==0){
            printf("composite");
            return;
        }
    }
    printf("prime");
    return;
}

int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
