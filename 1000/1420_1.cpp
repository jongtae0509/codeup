/**************************************************************
1420번
jongtae0509
C++
정확한 풀이코드 길이:340 byte(s)
수행 시간:0 ms
메모리 :1124 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>

using namespace std;

struct aa{
	int a;
	char b[100];
};

bool cmp(const aa &u,const aa &v){
	return u.a>v.a;
}

int main(){
	int n;
	struct aa as[51]={};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d",as[i].b,&as[i].a);
	}
	sort(as,as+n,cmp);
	printf("%s",as[2].b);
}
