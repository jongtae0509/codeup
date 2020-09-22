/**************************************************************
1452번
jongtae0509
C++
정확한 풀이코드 길이:352 byte(s)
수행 시간:32 ms
메모리 :1392 kb
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
	int n;
	struct aa as[100001]={};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&as[i].a);
	}
	sort(as,as+n,cmp);
	for(int i=0;i<n;i++){
		printf("%d\n",as[i].a);
	}
	
}
