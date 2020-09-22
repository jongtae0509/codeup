/**************************************************************
2761번
jongtae0509
C++
정확한 풀이코드 길이:311 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>

using namespace std;

struct aa{
	int a;
};

bool cmp(const aa &u,const aa &v){
	return u.a<v.a;
}

int main(){
	struct aa c[3]={};
	int a,b,i;
	scanf("%d %d",&a,&b);
	c[0].a=a+b;
	c[1].a=a*b;
	c[2].a=a-b;
	sort(c,c+3,cmp);
	printf("%d",c[1].a);
	
}
