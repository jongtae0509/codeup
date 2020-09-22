/**************************************************************
1371번
jongtae0509
C++
정확한 풀이코드 길이:360 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=1;i<n+1;i++){
		for(int j=0;j<n-i;j++) printf(" ");
		printf("*");
		for(int j=0;j<(i-1)*2;j++) printf(" ");
		puts("*");
	}
	for(int i=n;i>0;i--){
		for(int j=0;n-i>j;j++) printf(" ");
		printf("*");
		for(int j=0;j<(i-1)*2;j++) printf(" ");
		puts("*");
	}
}
