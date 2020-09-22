/**************************************************************
1445번
jongtae0509
C++
정확한 풀이코드 길이:527 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>

using namespace std;

struct a{
	int a;
};

bool cmp(const a &u,const a &v){
	return u.a<v.a;
}

int main(){
	struct a ap[10000];
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	int a[n1+1],b[n2+1];
	for(int i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n2;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n1;i++){
		ap[i].a=a[i];
	}
	for(int i=0;i<n2;i++){
		ap[i+n1].a=b[i];
	}
	sort(ap,ap+n1+n2,cmp);
	for(int i=0;i<n1+n2;i++){
		printf("%d ",ap[i].a);
	}
}
