/**************************************************************
1635번
jongtae0509
C++
정확한 풀이코드 길이:250 byte(s)
수행 시간:0 ms
메모리 :2220 kb
****************************************************************/


#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	int n;
	cin >> n;
	string a[10001]={};
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		cout << a[i] << "\n";
	}
}
