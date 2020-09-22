/**************************************************************
1271번
jongtae0509
C++
정확한 풀이코드 길이:267 byte(s)
수행 시간:0 ms
메모리 :1392 kb
****************************************************************/


#include <stdio.h>
#include <algorithm>

using namespace std;

bool cmp(const int &u,const int &v){
	return u>v;
}
int main(){
	int n,i,a[100000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n,cmp);
	printf("%d",a[0]);	
}
