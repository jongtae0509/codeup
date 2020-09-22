/**************************************************************
4501번
jongtae0509
C++
정확한 풀이코드 길이:192 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
	int n[7];
	int i;
	for(i=0;i<7;i++){
		scanf("%d",&n[i]);
	}
	sort(n,n+7);
	printf("%d\n%d",n[6],n[5]);
}
