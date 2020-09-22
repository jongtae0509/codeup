/**************************************************************
1545번
jongtae0509
C
정확한 풀이코드 길이:198 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int n;



#include<stdbool.h>
bool zero(int k){
	return !k;
}
int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero");
  else printf("non zero");
  return 0;
}
