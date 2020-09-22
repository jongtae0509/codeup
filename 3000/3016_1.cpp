/**************************************************************
3016번
jongtae0509
C++
정확한 풀이코드 길이:530 byte(s)
수행 시간:0 ms
메모리 :1124 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>
using namespace std;
struct a{
	int a,c,d;
	char b[11];
};
bool cmp(const a &u,const a &v){
	return u.a>v.a;
}


int main(){
	struct a aa[100];
	int n,sub3=0,sub2=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d %d %d",&aa[i].b,&aa[i].a,&aa[i].c,&aa[i].d);
	}
	sort(aa,aa+n,cmp);
	for(int i=1;i<n;i++){
		if(aa[0].c<aa[i].c){
			sub2++;
		}
	}
	for(int i=1;i<n;i++){
		if(aa[0].d<aa[i].d){
			sub3++;
		}
	}
	printf("%s %d %d",aa[0].b,sub2+1,sub3+1);
}
