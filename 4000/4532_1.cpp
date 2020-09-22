/**************************************************************
4532번
jongtae0509
C++
정확한 풀이코드 길이:307 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	char a[4],b[4],b1[4]={},b2[4]={},b3[4]={};
	cin >> a >> b;
	b1[0]=b[0];
	b2[0]=b[1];
	b3[0]=b[2];
	int aa=atoi(a),b11=atoi(b1),b22=atoi(b2),b33=atoi(b3),bb=atoi(b);
	cout << aa*b33<<"\n"<<aa*b22<<"\n"<<aa*b11<<"\n"<<aa*bb;
}
