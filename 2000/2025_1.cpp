/**************************************************************
2025번
jongtae0509
C++
정확한 풀이코드 길이:533 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>

using namespace std;

struct a{
	int a,b;
};

bool cmp(const a &u,const a &v){
	return u.a<v.a;
}
bool cmp1(const a &u,const a &v){
	return u.b<v.b;
}

int main(){
	struct a aa[5],bb[5];
	int sum=0;
	scanf("%1d%1d%1d%1d/%1d%1d/%1d%1d",&aa[0].a,&aa[1].a,&aa[2].a,&aa[3].a,&bb[0].b,&bb[1].b,&bb[2].b,&bb[3].b);
	sort(aa,aa+4,cmp);
	sort(bb,bb+4,cmp1);
	for(int i=0;i<4;i++){
		if(aa[i].a==bb[i].b){
			sum++;
		}
	}
	if(sum==4) printf("yes");
	else printf("no");
	
}
