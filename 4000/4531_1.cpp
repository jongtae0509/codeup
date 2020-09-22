/**************************************************************
4531번
jongtae0509
C++
정확한 풀이코드 길이:230 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
	int a[5],i,sum=0;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		sum+=a[i];
	}
	sort(a,a+5);
	printf("%d\n%d",sum/5,a[2]);
}
