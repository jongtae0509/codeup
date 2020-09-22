/**************************************************************
4711번
jongtae0509
C++
정확한 풀이코드 길이:256 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>

using namespace std;
int main(){
	int s[3],a,b,c,d,e,f,g,h,max;
	scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
	s[0]=a+b;
	s[1]=a+b-c+d;
	s[2]=a+b-c+d-e+f;
	sort(s,s+3);
	printf("%d",s[2]);

}
