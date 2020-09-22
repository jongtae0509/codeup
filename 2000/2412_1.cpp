/**************************************************************
2412번
jongtae0509
C++
정확한 풀이코드 길이:380 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,b;
	int cnt;
	int sum=0;
	cin >> n;
	char a[10000];
	char d[10000];
	for(int i=0;i<n;i++){
		while(1){
			scanf("%c",&a[i]);
			if(a[i]==',') cnt++;
			if(cnt==2){
				scanf("%d",&b);
				sum+=b;
				scanf("%s",d);
				break;
			}
		}
		cnt=0;
	}
	printf("%.2lf",(double)sum/n);
}
