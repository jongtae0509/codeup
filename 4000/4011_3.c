/**************************************************************
4011번
jongtae0509
C
정확한 풀이코드 길이:2006 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	scanf("%2d%2d%2d-%1d%d",&a,&b,&c,&d,&e);
	if(d==1&&a>=10){
		if(c<10&&b>=10)
		printf("19%d/%d/0%d M",a,b,c);
		else if(c<10&&b<10)
		printf("19%d/0%d/0%d M",a,b,c);
		else if(c>10&&b<10)
		printf("19%d/0%d/%d M",a,b,c);
		else
		printf("19%d/%d/%d M",a,b,c);
		}
	else if(d==1&&a<10){
		if(c<10&&b>=10)
		printf("190%d/%d/0%d M",a,b,c);
		else if(c<10&&b<10)
		printf("190%d/0%d/0%d M",a,b,c);
		else if(c>10&&b<10)
		printf("190%d/0%d/%d M",a,b,c);
		else
		printf("190%d/%d/%d M",a,b,c);
		}
	else if(d==2&&a>=10){
		if(c<10&&b>=10)
		printf("19%d/%d/0%d F",a,b,c);
		else if(c<10&&b<10)
		printf("19%d/0%d/0%d F",a,b,c);
		else if(c>10&&b<10)
		printf("19%d/0%d/%d F",a,b,c);
		else
		printf("19%d/%d/%d F",a,b,c);
		}
	else if(d==2&&a<10){
		if(c<10&&b>=10)
		printf("190%d/%d/0%d F",a,b,c);
		else if(c<10&&b<10)
		printf("190%d/0%d/0%d F",a,b,c);
		else if(c>10&&b<10)
		printf("190%d/0%d/%d F",a,b,c);
		else
		printf("190%d/%d/%d F",a,b,c);
		}
	else if(d==3&&a>=10){
		if(c<10&&b>=10)
		printf("20%d/%d/0%d M",a,b,c);
		else if(c<10&&b<10)
		printf("20%d/0%d/0%d M",a,b,c);
		else if(c>10&&b<10)
		printf("20%d/0%d/%d M",a,b,c);
		else
		printf("20%d/%d/%d M",a,b,c);
		}
	else if(d==3&&a<10){
		if(c<10&&b>=10)
		printf("200%d/%d/0%d M",a,b,c);
		else if(c<10&&b<10)
		printf("200%d/0%d/0%d M",a,b,c);
		else if(c>10&&b<10)
		printf("200%d/0%d/%d M",a,b,c);
		else
		printf("200%d/%d/%d M",a,b,c);
		}
	else if(d==3&&a>=10){
		if(c<10&&b>=10)
		printf("20%d/%d/0%d F",a,b,c);
		else if(c<10&&b<10)
		printf("20%d/0%d/0%d F",a,b,c);
		else if(c>10&&b<10)
		printf("20%d/0%d/%d F",a,b,c);
		else
		printf("20%d/%d/%d F",a,b,c);
		}
	else if(d==3&&a<10){
		if(c<10&&b>=10)
		printf("200%d/%d/0%d F",a,b,c);
		else if(c<10&&b<10)
		printf("200%d/0%d/0%d F",a,b,c);
		else if(c>10&&b<10)
		printf("200%d/0%d/%d F",a,b,c);
		else
		printf("200%d/%d/%d F",a,b,c);
		}
}
