/**************************************************************
1415번
jongtae0509
C++
정확한 풀이코드 길이:566 byte(s)
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
	struct aa s[11]={};
	int i,a1=0,a2=0;
	for(i=0;i<10;i++){
		scanf("%d",&s[i].a);
	}
	sort(s,s+10,cmp);
	for(i=0;i<10;i++){
		if(s[i].a%2==0){
			a1=s[i].a;
			break;
		}
	}
	for(i=0;i<10;i++){
		if(s[i].a%2!=0){
			a2=s[i].a;
			break;
		}
	}
	if(a1!=0&&a2!=0)
	printf("%d %d",a2,a1);
	else if(a1==0&&a2!=0)
	printf("%d",a2);
	else if(a1!=0&&a2==0)
	printf("%d",a1);
	
	
}
