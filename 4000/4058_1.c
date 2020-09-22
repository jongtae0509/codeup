/**************************************************************
4058번
jongtae0509
C
정확한 풀이코드 길이:568 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<string.h>
int main(){
	char s[21]={},s1[21]={};
	scanf("%s",s);
	int len=strlen(s),k=0,aski[20],jinsu[500]={};
	for(int i=len-1;i>=0;i--){
		s1[k]=s[i];
		k++;
	}
	k=0;
	for(int i=0;i<len;i++){
		aski[i]=s1[i];
	}
	for(int i=0;i<len;i++){
		while(aski[i]>0)
    	{
        	jinsu[k]=aski[i]%2;
        	aski[i]=aski[i]/2;
        	k++;
    	}
    	for(int j=k-1;j>=0;j--){
        	if(jinsu[j]==0){
        		printf("1");
			}
			else{
				printf("0");
			}
        }
        puts("");
        k=0;
    }
	
}
