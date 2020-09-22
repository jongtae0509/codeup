/**************************************************************
1440번
jongtae0509
C
정확한 풀이코드 길이:384 byte(s)
수행 시간:27 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		printf("%d: ",i);
		for(int j=1;j<=n;j++){
			if(i==j){
				continue;
			}
			if(a[i]>a[j]){
				printf("> ");
			}
			else if(a[i]<a[j]){
				printf("< ");
			}
			else{
				printf("= ");
			}
		}
		printf("\n");
	}
}
