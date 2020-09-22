/**************************************************************
1617번
jongtae0509
C
정확한 풀이코드 길이:471 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char s[6],b[6],k=0,i,cmp[6],cmp2[6];
	int a,sum,se=0;
	scanf("%s",&s);
	for(i=strlen(s)-1;i>=0;i--){
		b[k]=s[i];
		k++;
	}
	sum=atoi(s)+atoi(b);
	sprintf(cmp,"%d",sum);
	k=0;
	for(i=strlen(cmp)-1;i>=0;i--){
		cmp2[k]=cmp[i];
		k++;
	}
	for(i=0;i<strlen(cmp);i++){
		if(cmp[i]==cmp2[i]){
			se++;
		}
	}
	if(se==strlen(cmp)){
		printf("YES");
	}
	else{
		printf("NO");
	}
}
