/**************************************************************
1535번
jongtae0509
C
정확한 풀이코드 길이:301 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int n, d[110];


int f(){
	int i2=0;
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(max<d[i])
		{
			max=d[i];
			i2=i;
		}
	}	
	return i2+1;
}
int main()
{
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d", f());
  return 0;
}
