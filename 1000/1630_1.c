/**************************************************************
1630번
jongtae0509
C
정확한 풀이코드 길이:296 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

struct aa{
	char c[101];
};
int main(){
	int n;
	struct aa c[101];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",c[i].c);
	}
	for(int i=0;i<n;i++){
		if(i!=n-1){
		printf("%s\n",c[i].c);
		printf("AMOLED\n");
		}
		else
		printf("%s",c[i].c);

	}
}
