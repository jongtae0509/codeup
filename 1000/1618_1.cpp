/**************************************************************
1618번
jongtae0509
C++
정확한 풀이코드 길이:334 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>

using namespace std;


struct weight{
	int a;
};

bool cmp(const weight &u, const weight &v){
	return u.a<v.a;
}
int main(){
	struct weight aa[3];
	int i;
	for(i=0;i<3;i++){
		scanf("%d",&aa[i].a);
	}
	sort(aa,aa+3,cmp);
	for(i=0;i<3;i++){
		printf("%d ",aa[i].a);
	}
	
}
