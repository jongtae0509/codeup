/**************************************************************
4536번
jongtae0509
C++
정확한 풀이코드 길이:476 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include<iostream>
#include<algorithm>
using namespace std;
struct a{
	int a;
	int b;
};
bool cmp(const a &u,const a &v){
	return u.b<v.b;
}
int main(){
	int sum=0;
	struct a aa[1000];
	for(int i=0;i<10;i++){
		cin >> aa[i].a;
		sum+=aa[i].a;
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(aa[i].a==aa[j].a) aa[i].b++;
		}
	}
	sort(aa,aa+10,cmp);
	
	cout << sum/10;
	puts("");
for(int i=0;i<10;i++){
		if(i==9) cout << aa[i].a ;
	}
	
}
