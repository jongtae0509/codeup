/**************************************************************
1721번
jongtae0509
C
정확한 풀이코드 길이:202 byte(s)
수행 시간:0 ms
메모리 :1132 kb
****************************************************************/


#include<stdio.h>
#include<math.h>
int main(){
	int x1,x2,y1,y2,x,y,xy;
	scanf("%d %d",&x1,&y1);
	scanf("%d %d",&x2,&y2);
	x=x2-x1;
	y=y2-y1;
	xy=pow(x,2)+pow(y,2);
	printf("%.2f",sqrt(xy));
}
