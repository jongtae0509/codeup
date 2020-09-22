/**************************************************************
4621번
jongtae0509
C++
정확한 풀이코드 길이:235 byte(s)
수행 시간:0 ms
메모리 :1392 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
	int n,k,i,a[100000],c=0;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++){
		if(n%i==0){
			a[c]=i;
			c++;
		}
	}
	sort(a,a+c);
	printf("%d",a[k-1]);
}
