/**************************************************************
1172번
jongtae0509
C++
정확한 풀이코드 길이:189 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[3];
	for(int i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+3);
	for(int i=0;i<3;i++){
		printf("%d ",a[i]);
	}
}
