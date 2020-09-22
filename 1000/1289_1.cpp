/**************************************************************
1289번
jongtae0509
C++
정확한 풀이코드 길이:395 byte(s)
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
	return u.m>v.m;
}

main(){
	int a,b,c,d,e,f,ab,cd,ef;
	struct a aa[4];
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	scanf("%d %d",&e,&f);
	ab=a*b;
	cd=c*d;
	ef=e*f;
	aa[0].m=ab;
	aa[1].m=cd;
	aa[2].m=ef;
	sort(aa,aa+3,cmp);
	printf("%d",aa[0].m);
}
