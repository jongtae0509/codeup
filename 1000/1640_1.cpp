/**************************************************************
1640번
jongtae0509
C++
정확한 풀이코드 길이:638 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<string.h>
int main(){
	int n,i,j,check=0,len;
	char c[51]={};
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		fgets(c,50,stdin);
		if(strlen(c)>4){
			for(j=0;j<strlen(c);j++){
				if(c[j]=='t'&&c[j+1]=='a'&&c[j+2]=='p'){
					printf("%s",c);
					check++;
					break;
				}
				else if(c[j]=='x'&&c[j+1]=='o'&&c[j+2]=='c'&&c[j+3]=='u'&&c[j+4]=='r'&&c[j+5]=='e'){
					printf("%s",c);
					check++;
					break;
				}
			}
		}
		else{
			printf("%s",c);
			check++;
		}
	}
	if(check<=3){
		printf("safe");
	}
	else if(check<=6){
		printf("warning");
	}
	else{
		printf("danger");
	}
}
