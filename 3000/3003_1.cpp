/**************************************************************
3003번
jongtae0509
C++
정확한 풀이코드 길이:237 byte(s)
수행 시간:373 ms
메모리 :2180 kb
****************************************************************/


#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a;
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	for(int i=1;i<=5000000;i++){
	    cin >> a;
	    if(i%50==0) cout << a<< " ";
	}
}
