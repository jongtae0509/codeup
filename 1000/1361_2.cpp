/**************************************************************
1361번
jongtae0509
C++
정확한 풀이코드 길이:197 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include<iostream>
using namespace std;
int ho(int n){
	for(int i=0;i<n;i++){
		cout << " ";
	}
}
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		ho(i);
		cout << "**\n";
	}
}
