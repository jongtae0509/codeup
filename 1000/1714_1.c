/**************************************************************
1714번
jongtae0509
C
정확한 풀이코드 길이:207 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>

int main(){
	char a[100001];
	int b;
	scanf("%s",&a);
	for(int i=0;i<100001;i++){
		if(a[i]==0){
			b=i;
			break;
		}
	}
	for(int i=b-1;i>=0;i--){
		printf("%c",a[i]);
	}
}
