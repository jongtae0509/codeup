/**************************************************************
4031번
jongtae0509
C++
정확한 풀이코드 길이:454 byte(s)
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
	struct aa a[7];
	int i,max1=0,max2=0;
	for(i=0;i<7;i++){
		scanf("%d",&a[i].a);
	}
	sort(a,a+7,cmp);
	for(i=0;i<7;i++){
		if(a[i].a%2==0){
			max1=a[i].a;
			break;
		}
	}
	for(i=0;i<7;i++){
		if(a[i].a%2!=0){
			max2=a[i].a;
			break;
		}
	}
	printf("%d",max1+max2);
}
