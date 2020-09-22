/**************************************************************
1733번
jongtae0509
C
정확한 풀이코드 길이:222 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main() {
	char a[10000];
	scanf("%s",&a);
	if(a[0]==73&&a[1]==79&&a[2]==73&&a[3]==0){
		printf("IOI is the International Olympiad in Informatics.");
	}
	else{
		printf("I don't care.");
	}
}
