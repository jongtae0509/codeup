/**************************************************************
3017번
jongtae0509
C++
정확한 풀이코드 길이:458 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include<iostream>
#include<algorithm>
using namespace std;
struct a{
	int a,b,s;
};
bool cmp(const a &u,const a &v){
	if(u.a==v.a){
		if(u.b==v.b){
			return u.s<v.s;
		}
		return u.b>v.b;
	}
	return u.a>v.a;
}
int main(){
	struct a aa[1000]={};
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> aa[i].a >> aa[i].b;
		aa[i].s=i;
	}
	sort(aa,aa+n,cmp);
	for(int i=0;i<n;i++){
		printf("%d %d %d\n",aa[i].s+1,aa[i].a,aa[i].b);
	}
}
