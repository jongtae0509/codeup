/**************************************************************
1546번
jongtae0509
C
정확한 풀이코드 길이:252 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int n;



#include<stdbool.h>
bool zero(int k){
	return !k;
}
bool plus(int k){
	return k>0;
}
int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero");
  else printf("%s", plus(n)?"plus":"minus");
  return 0;
}
