/**************************************************************
3705번
jongtae0509
C++
정확한 풀이코드 길이:273 byte(s)
수행 시간:21 ms
메모리 :2024 kb
****************************************************************/


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	int sum=0;
	int ret=-987654321;
	int num;
	for(int i=0;i<n;i++){
		cin>>num;
		sum+=num;
		ret=max(ret, sum);
		if(sum<0) sum=0;
	}
	cout << ret;
}
