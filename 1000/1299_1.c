/**************************************************************
1299번
jongtae0509
C
정확한 풀이코드 길이:249 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int i,j,k;
	for(i=-1000;i<=1000;i++){
		for(j=-1000;j<=1000;j++){
			if((a*i)+(b*j)==c){
				printf("%d %d",i,j);
				return 0;
			}
		}
	}
	printf("Not Exist");
}
