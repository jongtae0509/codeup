/**************************************************************
1547번
jongtae0509
C
정확한 풀이코드 길이:322 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int n;



#include<stdbool.h>
int prime(int k){
int  i;
	
	for (i = 2; i < k; i++){
		if(k % i == 0){
        	return false;
    	}
	}
	if(i == k){
    	return true;
    }
}
int main()
{
  scanf("%d", &n);
  if(prime(n)) printf("prime");
  else printf("composite");
  return 0;
}
