/**************************************************************
4592번
jongtae0509
C++
정확한 풀이코드 길이:349 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int x,y,cnt=0;
	int a[101][101]={};
	for(int i=0;i<n;i++){
		cin >> x >> y;
		for(int j=x;j<x+10;j++){
			for(int k=y;k<y+10;k++){
				a[j][k]=1;
			}
		}
	}
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			if(a[i][j]==1) cnt++;
		}
	}
	cout << cnt;
}
