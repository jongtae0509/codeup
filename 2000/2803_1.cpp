/**************************************************************
2803번
jongtae0509
C++
정확한 풀이코드 길이:244 byte(s)
수행 시간:0 ms
메모리 :1132 kb
****************************************************************/


#include<stdio.h>
#include<math.h>
int main(){
	int x1,y1,d1,x2,y2,d2;
	double t;
	scanf("%d %d %d %d %d %d",&x1,&y1,&d1,&x2,&y2,&d2);
	t=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	if(t>d1+d2) puts("not overlapped");
	else puts("overlapped");
}
