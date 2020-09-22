/**************************************************************
1807번
jongtae0509
C++
정확한 풀이코드 길이:369 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int n,m,cnt=0,t,c1,cmax=0;
	scanf("%d %d",&n,&m);
	if(n==1&&m==1){
		printf("1 1");
		return 0;
	}
	for(int i=n;i<=m;i++){
		t=i;
		while(t!=1){
			if(t%2==0){
				t/=2;
				cnt++;
			}
			else{
				t=3*t+1;
				cnt++;
			}
		}
		if(cnt>cmax){
			cmax=cnt;
			c1=i;
		}
		cnt=0;
	}
	printf("%d %d",c1,cmax+1);
}
