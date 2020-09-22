/**************************************************************
3129번
jongtae0509
C++
정확한 풀이코드 길이:398 byte(s)
수행 시간:17 ms
메모리 :2024 kb
****************************************************************/


#include <iostream>
#include <stack>
#include <string.h>
 
using namespace std;
 
int main(){
	char a[50001]={};
	cin >> a;
    stack<int> s;
    for(int i=0;i<strlen(a);i++){
    	if(a[i]=='(') s.push(1);
    	else if(a[i]==')'){
    		if(!s.empty()) s.pop();
    		else{
    			cout <<"bad";
    			return 0;
			}
		}
	}
	if(!s.empty()) cout <<"bad";
	else cout << "good";
}
