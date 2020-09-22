/**************************************************************
2746번
jongtae0509
C
정확한 풀이코드 길이:207 byte(s)
수행 시간:0 ms
메모리 :1308 kb
****************************************************************/


#include<stdio.h>
#include<math.h>
int main(){
	int n,m,k=0,j,i;
	scanf("%d %d",&n,&m);
	j=n;
	for(i=1;i<7;i++){
		if(pow(j,i)>=m){
			printf("Dangerous");
			return 0;
		}
	}
	printf("Safe");
}
