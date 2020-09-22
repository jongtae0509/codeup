/**************************************************************
1720번
jongtae0509
C++
정확한 풀이코드 길이:311 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int n,t[3]={},a;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %d %d %d",&t[0],&t[1],&t[2],&a);
		sort(t,t+3);
		if(a==t[0]){
			continue;
		}
		else{
			printf("%d %d",i,t[0]);
			return 0;
		}
	}
	printf("-1");
}
