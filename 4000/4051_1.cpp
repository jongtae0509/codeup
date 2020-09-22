/**************************************************************
4051번
jongtae0509
C++
정확한 풀이코드 길이:359 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	double a[5],b[5],c=0;
	int i;
	for(i=0;i<5;i++){
		cin >> a[i] >> b[i];
	}
	for(i=0;i<5;i++){
		if(b[i]-a[i]-1>0){
			if(b[i]-a[i]-1>4) c+=4;
			else c+=b[i]-a[i]-1;
		}
	}
	c/=0.5;
	c*=5000;
	if(c>=150000) c*=0.95;
	else if(c<=50000) c*=1.05;
	printf("%.0f",c);
} 
