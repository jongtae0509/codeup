/**************************************************************
1293번
jongtae0509
C++
정확한 풀이코드 길이:318 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>

using namespace std;

struct a{
	int m;
};

bool cmp(const a &u, const a &v){
	return u.m<v.m;
}

main(){
	int n;
	scanf("%d",&n);
	struct a aa[101];
	for(int i=0;i<n;i++){
		scanf("%d",&aa[i].m);
	}
	sort(aa,aa+n,cmp);
	printf("%d %d",aa[n-1].m,aa[0].m);
}
