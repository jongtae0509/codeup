/**************************************************************
4846번
jongtae0509
C++
정확한 풀이코드 길이:168 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include<iostream>
using namespace std;
int main(){
	int n;
	int sum=0,a,b,t=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		t+=b%a;
	}
	cout << t;
}
