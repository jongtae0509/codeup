/**************************************************************
1709번
jongtae0509
C++
정확한 풀이코드 길이:346 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
#include <algorithm>

using namespace std;

struct data{
	int a;
};

bool cmp(const data &u,const data &v){
	return u.a>v.a;
}

int main(){
	struct data aa[101];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&aa[i].a);
	}
	sort(aa,aa+n,cmp);
	for(i=0;i<n;i++){
		printf("%d ",aa[i].a);
	}
}
