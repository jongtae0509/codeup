/**************************************************************
3019번
jongtae0509
C++
정확한 풀이코드 길이:502 byte(s)
수행 시간:0 ms
메모리 :2028 kb
****************************************************************/


#include<iostream>
#include<algorithm>
using namespace std;
struct a{
	int y,m,d;
	string s;
};
bool cmp1(const a &u,const a &v){
	if(u.y==v.y){
		if(u.m==v.m){
			if(u.d==v.d){
				return u.s<v.s;
			}
			return u.d<v.d;
		}
		return u.m<v.m;
	}
	return u.y<v.y;
}

int main(){
	struct a aa[100]={};
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> aa[i].s >> aa[i].y >> aa[i].m >> aa[i].d;
	}
	sort(aa,aa+n,cmp1);
	for(int i=0;i<n;i++){
		cout << aa[i].s <<"\n";
	}
}
