/**************************************************************
4026번
jongtae0509
C++
정확한 풀이코드 길이:317 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>

using namespace std;

struct aa{
	int a;
};


bool cmp(const aa &u,const aa &v ){
	return u.a<v.a;
}

int main()
{ 
	struct aa ap[6];
	scanf("%d %d %d %d %d",&ap[0].a,&ap[1].a,&ap[2].a,&ap[3].a,&ap[4].a);
	sort(ap,ap+5,cmp);
	printf("%d",ap[2].a);
	
	
	
}
