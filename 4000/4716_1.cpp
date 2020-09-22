/**************************************************************
4716번
jongtae0509
C++
정확한 풀이코드 길이:571 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>

using namespace std;
int main(){
	int ha[9],a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,max;
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p,&q,&r,&s,&t);
	ha[0]=a+b;
	ha[1]=a+b-c+d;
	ha[2]=a+b-c+d-e+f;
	ha[3]=a+b-c+d-e+f-g+h;
	ha[4]=a+b-c+d-e+f-g+h-i+j;
	ha[5]=a+b-c+d-e+f-g+h-i+j-k+l;
	ha[6]=a+b-c+d-e+f-g+h-i+j-k+l-m+n;
	ha[7]=a+b-c+d-e+f-g+h-i+j-k+l-m+n-o+p;
	ha[8]=a+b-c+d-e+f-g+h-i+j-k+l-m+n-o+p-q+r;
	sort(ha,ha+9);
	printf("%d",ha[8]);

}

