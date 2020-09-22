/**************************************************************
1551번
jongtae0509
C
정확한 풀이코드 길이:300 byte(s)
수행 시간:34 ms
메모리 :1508 kb
****************************************************************/


#include <stdio.h>

int n, d[100010], k;




int f(int a){
	
	int i;
	
	for(i=1;i<=n;i++)
	{
		if(d[i]==a)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);
  printf("%d\n", f(k));
}
