/**************************************************************
5068번
jongtae0509
C++
정확한 풀이코드 길이:208 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if(a<2) puts("Before");
	else if(a==2&&b<18) puts("Before");
	else if(a==2&&b==18) puts("Special");
	else puts("After");
	}
