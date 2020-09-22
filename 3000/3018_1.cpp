/**************************************************************
3018번
jongtae0509
C++
정확한 풀이코드 길이:635 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include<iostream>
#include<algorithm>
using namespace std;
struct a{
	int a,b,c,ra;
};
bool cmp1(const a &u,const a &v){
	return u.b<v.b;
}
bool cmp2(const a &u,const a &v){
	return u.c<v.c;
}
bool cmp3(const a &u,const a &v){
	if(u.ra==v.ra){
		return u.b<v.b;
	}
	return u.ra<v.ra;
}
int main(){
	struct a aa[501]={};
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> aa[i].a >> aa[i].b >> aa[i].c;
	}
	sort(aa,aa+n,cmp1);
	for(int i=0;i<n;i++){
		aa[i].ra+=i;
	}
	sort(aa,aa+n,cmp2);
	
	for(int i=0;i<n;i++){
		aa[i].ra+=i;
	}
	sort(aa,aa+n,cmp3);
	printf("%d %d %d",aa[0].a,aa[0].b,aa[0].c);
}
