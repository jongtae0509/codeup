/**************************************************************
2742번
jongtae0509
C++
정확한 풀이코드 길이:391 byte(s)
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
	return u.a>v.a;
}

int main(){
	struct aa p[10000];
	int n,i,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&p[i].a);
	}
	sort(p,p+n,cmp);
	temp=p[0].a;
	p[0].a=p[(n/2)].a;
	p[(n/2)].a=temp;
	for(i=0;i<n;i++){
		printf("%d ",p[i].a);
	}
}
