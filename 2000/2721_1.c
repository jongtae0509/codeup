/**************************************************************
2721번
jongtae0509
C
정확한 풀이코드 길이:248 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<string.h>

int main(){
	char S1[21],S2[21],S3[21];
	scanf("%s %s %s",S1,S2,S3);
	if(S1[strlen(S1)-1]==S2[0]&&S2[strlen(S2)-1]==S3[0]&&S3[strlen(S3)-1]==S1[0]){
		printf("good");
	}
	else{
		printf("bad");
	}
}
