/**************************************************************
1293번
jongtae0509
C++
정확한 풀이코드 길이:215 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include<iostream>
using namespace std;
int main(){
	int n,t;
	cin >> n;
	int max=-100,min=10000;
	for(int i=0;i<n;i++){
		cin >> t;
		if(t>max) max=t;
		if(t<min) min=t;
	}
	cout << max << " " << min;
}
