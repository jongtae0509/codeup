/**************************************************************
4651번
jongtae0509
C
정확한 풀이코드 길이:890 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>

int main(){
	int i,cnt0=0,cnt1=0,cnt2=0;
	char a[10],b[10],c[10];
	fgets(a,100,stdin);
	fgets(b,100,stdin);
	fgets(c,100,stdin);
	for(i=0;i<10;i++){
		if(a[i]==48){
			cnt0++;
		}
		if(b[i]==48){
			cnt1++;
		}
		if(c[i]==48){
			cnt2++;
		}
	}
	if(cnt0==0){
		printf("E\n");
	}
	else if(cnt0==1){
		printf("A\n");
	}
	else if(cnt0==2){
		printf("B\n");
	}
	else if(cnt0==3){
		printf("C\n");
	}
	else if(cnt0==4){
		printf("D\n");
	}
	if(cnt1==0){
		printf("E\n");
	}
	else if(cnt1==1){
		printf("A\n");
	}
	else if(cnt1==2){
		printf("B\n");
	}
	else if(cnt1==3){
		printf("C\n");
	}
	else if(cnt1==4){
		printf("D\n");
	}
	if(cnt2==0){
		printf("E");
	}
	else if(cnt2==1){
		printf("A");
	}
	else if(cnt2==2){
		printf("B");
	}
	else if(cnt2==3){
		printf("C");
	}
	else if(cnt2==4){
		printf("D");
	}
} 
