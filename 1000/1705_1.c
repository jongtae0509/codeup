/**************************************************************
1705번
jongtae0509
C
정확한 풀이코드 길이:505 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	char a[4]={},aa=0;
	scanf("%s",&a);
	for(int i=0;i<4;i++){
		if(a[i]==51||a[i]==54||a[i]==57){
			printf("K");
			aa+=1;
		}
	}
	if(a[1]==0&&aa==0){
		for(int i=0;i<1;i++){
			printf("%c",a[i]);	
		}
	}
	else if(a[2]==0&&aa==0){
		for(int i=0;i<2;i++){
			printf("%c",a[i]);	
		}
	}
	else if(a[3]==0&&aa==0){
		for(int i=0;i<3;i++){
			printf("%c",a[i]);	
		}
	}
	else if(a[4]==0&&aa==0){
		for(int i=0;i<4;i++){
			printf("%c",a[i]);	
		}
	}
}
