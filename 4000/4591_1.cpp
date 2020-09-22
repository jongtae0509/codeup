/**************************************************************
4591번
jongtae0509
C++
정확한 풀이코드 길이:404 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>

using namespace std;

struct aa{
	int a;
};

bool cmp(const aa &u, const aa &v){
	return u.a>v.a;
}

int main(){
	int a[9]={};
	struct aa b[9]={};
	int i;
	for(i=0;i<9;i++){
		scanf("%d",&b[i].a);
		a[i]=b[i].a;
	}
	sort(b,b+9,cmp);
	for(i=0;i<9;i++){
		if(a[i]==b[0].a){
			break;
		}
	}
	printf("%d\n",b[0].a);
	printf("%d",i+1);
	
}
