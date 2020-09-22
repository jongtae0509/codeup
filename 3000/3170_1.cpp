/**************************************************************
3170번
jongtae0509
C++
정확한 풀이코드 길이:390 byte(s)
수행 시간:27 ms
메모리 :2184 kb
****************************************************************/


#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n,m;
	string a;
	int b;
	unordered_map<string,int> q;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		q[a] += b;
	}
	for (int i = 0; i < m; i++) {
		cin >> a;
		cout << q[a] << "\n";
	}
}
