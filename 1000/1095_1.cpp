/**************************************************************
1095번
jongtae0509
C++
정확한 풀이코드 길이:314 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>

using namespace std;

struct bi{
	int a;
};

bool cmp(const bi &u, const bi &v){
	return u.a<v.a;
}

int main(){
	struct bi k[10001];
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&k[i].a);
	}
	
	sort(k,k+n,cmp);
	printf("%d",k[1].a);
}
