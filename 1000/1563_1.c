/**************************************************************
1563번
jongtae0509
C
정확한 풀이코드 길이:437 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int n, m, x;

int max(int p, int q){ return p>=q?p:q;}

int min(int p, int q){ return p<q?p:q;}
int mid(int a,int b,int c)
{
	int aa;
	if(a<b)
    {
        aa=a;
		a=b;
		b=aa;
    }
    if(a<c)
    {
        aa=a;
		a=c;
		c=aa;
    }
    if(b<c)
    {
        aa=b;
		b=c;  
		c=aa;
    }
    return b;
}
int main()
{
  scanf("%d%d%d", &n, &m, &x);
  printf("%d\n", mid(n, m, x));
}
