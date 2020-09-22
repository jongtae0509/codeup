/**************************************************************
2413번
jongtae0509
C++
정확한 풀이코드 길이:284 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,cnt1;
	double sum=0;
	cin >> n;
	string s;
	for(int j=0;j<n;j++){
		cin >> s;
		for(int i=0;i<s.size();i++){
		if(s[i]==',') cnt1++;
		}
		sum+=cnt1-2;
		cnt1=0;	
	}
	printf("%.2lf",sum/n);
}
