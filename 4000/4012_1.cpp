/**************************************************************
4012번
jongtae0509
C++
정확한 풀이코드 길이:546 byte(s)
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
	return u.a<v.a;
}

int main(){
	 struct aa k[200];
	 int i,n,aa[200],rate=0,bb[200],j,cc[200];
	 scanf("%d",&n);
	 for(i=0;i<n;i++){
	 	scanf("%d",&k[i].a);
	 	aa[i]=k[i].a;
	 	bb[i]=k[i].a;
	 	cc[i]=k[i].a;
	 }
	 for(i=0;i<n;i++){
	 	for(j=0;j<n;j++){
	 		if(cc[i]<aa[j]){
	 			rate++;
			 }
		 }
		 bb[i]=rate;
			rate=0;
	 }
	 for(i=0;i<n;i++){
	 	printf("%d %d\n",cc[i],bb[i]+1);
	 }
	 
}
