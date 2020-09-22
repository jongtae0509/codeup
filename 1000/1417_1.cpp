/**************************************************************
1417번
jongtae0509
C++
정확한 풀이코드 길이:286 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>

using namespace std;

struct aa{
	int a;
};

bool cmp(const aa &u,const aa &v){
	return u.a>v.a;
}

int main(){
	struct aa k[10];
	int i;
	for(i=0;i<10;i++){
		scanf("%d",&k[i].a);
	}
	sort(k,k+10,cmp);
	printf("%d",k[2].a);
}
