/**************************************************************
2773번
jongtae0509
C++
정확한 풀이코드 길이:353 byte(s)
수행 시간:0 ms
메모리 :2104 kb
****************************************************************/


#include<iostream>
#include<string>
using namespace std;
struct a{
	int a;
	char t[200];
};
int main(){
	int n;
	struct a aa[1000]={};
	char s[100]={};
	cin >> n >> s;
	for(int i=0;i<n;i++){
		scanf("%d,%s",&aa[i].a,aa[i].t);
	}
	for(int i=0;i<n;i++){
		printf("\"%d\",\"%s\",\"%s\",\"0\",\"\",\"0\",\"0\"\n",aa[i].a,aa[i].t,s);
	}
}

