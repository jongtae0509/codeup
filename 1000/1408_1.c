/**************************************************************
1408번
jongtae0509
C
정확한 풀이코드 길이:396 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main() {
	char a[21]={},b[21]={};
	int i;
	scanf("%s",a);
	for(i=0;i<20;i++){
		if(a[i]==0){
			break;
		}
		else{
			b[i]=a[i];
		}
	}
	for(i=0;i<20;i++){
		if(a[i]==0){
			break;
		}
		else{
			a[i]+=2;
		}
	}
	printf("%s\n",a);
	for(i=0;i<20;i++){
		if(b[i]==0){
			break;
		}
		else{
			b[i]=(b[i]*7)%80+48;
		}
	}
	printf("%s",b);
	
	
}
