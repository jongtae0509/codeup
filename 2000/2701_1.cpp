/**************************************************************
2701번
jongtae0509
C++
정확한 풀이코드 길이:239 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include<iostream>
using namespace std;
int main(){
	int n,a[5],gu,min=101000;
	cin >> n;
	for(int i=0;i<5;i++){
		cin >> a[i];
		if(a[i]>n){
			gu=a[i]-n;
		}
		else{
			gu=n-a[i];
		}
		if(gu<min) min=gu;
	}
	cout<<min;
}
