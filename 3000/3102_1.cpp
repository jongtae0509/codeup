/**************************************************************
3102번
jongtae0509
C++
정확한 풀이코드 길이:595 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
	int n;
	stack<int> s;
	cin >> n;
	for(int i=0;i<n;i++){
		string str;
		cin >> str;
		if(str=="push("){
			int num;
			cin >> num;
			s.push(num);
			cin >> str;
		}
		else if(str == "top()"){
			if(s.empty()==1) cout << -1 << "\n";
			else cout << s.top()<< "\n";
		}
		else if(str =="size()") cout << s.size() << "\n";
		else if(str =="empty()"){
			if(s.empty()==0) cout << "false\n";
			else cout << "true\n";
		}
		else if(str =="pop()"){
			if(!s.empty()) s.pop();
		}
	}
}
