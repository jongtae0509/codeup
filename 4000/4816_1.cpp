/**************************************************************
4816번
jongtae0509
C++
정확한 풀이코드 길이:320 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include<iostream>
using namespace std;
int main(){
	int t;
	int a=0,b=0,c=0;
	cin >> t;
	if(t%10!=0){
		cout << -1;
		return 0;
	} 
	while(t!=0){
		if(t>=300){
			t-=300;
			a++;
		}
		else if(t>=60){
			t-=60;
			b++;
		}
		else if(t>=10){
			t-=10;
			c++;
		}
	}
	printf("%d %d %d",a,b,c);
}
