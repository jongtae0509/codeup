/**************************************************************
2026번
jongtae0509
C++
정확한 풀이코드 길이:634 byte(s)
수행 시간:0 ms
메모리 :2156 kb
****************************************************************/


#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	char ss[256][5];
	strcpy(ss['0'],"0000");
	strcpy(ss['1'],"0001");
	strcpy(ss['2'],"0010");
	strcpy(ss['3'],"0011");
	strcpy(ss['4'],"0100");
	strcpy(ss['5'],"0101");
	strcpy(ss['6'],"0110");
	strcpy(ss['7'],"0111");
	strcpy(ss['8'],"1000");
	strcpy(ss['9'],"1001");
	strcpy(ss['A'],"1010");
	strcpy(ss['B'],"1011");
	strcpy(ss['C'],"1100");
	strcpy(ss['D'],"1101");
	strcpy(ss['E'],"1110");
	strcpy(ss['F'],"1111");
	char a;
	for(int i=0;i<s.size();i++){
		a=s[i];
		cout << ss[a] << " ";
	}
}
