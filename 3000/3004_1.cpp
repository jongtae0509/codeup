/**************************************************************
3004번
jongtae0509
C++
정확한 풀이코드 길이:500 byte(s)
수행 시간:21 ms
메모리 :1588 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>

using namespace std;

struct jung{
	int a,b,c;
};

bool cmpjung(const jung &u, const jung&v) {
	return u.a<v.a;
}
bool cmpjjang(const jung &u, const jung&v) {
	return u.b<v.b;
}

int main(){
	struct jung j[50000];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&j[i].a);
		j[i].b=i;
	}
	sort(j,j+n,cmpjung);
	
	for(i=0;i<n;i++){
		j[i].c=i;
	}
	sort(j,j+n,cmpjjang);
	for(i=0;i<n;i++){
		printf("%d ",j[i].c);
	}
}

