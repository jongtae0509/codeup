/**************************************************************
2774번
jongtae0509
C
정확한 풀이코드 길이:281 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<string.h>
int main(){
	char a[101];
	int n,check=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){ 
		scanf("%s",a); 
		check=0;
		for(int j=0;j<strlen(a);j++){
			if(a[j]=='6'&&a[j+1]=='2'){
				check++;
			}
		}
		printf("%d\n",check);
	}
	
}
