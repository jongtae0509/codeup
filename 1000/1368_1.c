/**************************************************************
1368번
jongtae0509
C
정확한 풀이코드 길이:409 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
int main(){
    int n,k,i,j;
    char h;
    scanf("%d %d %c",&n,&k,&h);
    for (i=n;i>0;i--){
        if(h=='R'){
        	for (j=1;j<i;j++){
        		printf(" ");
        	}
        }
        else{
        	for(j=1;j<=n-i;j++){
        		printf(" ");
        	}
        }
        for(j=1;j<=k;j++){
            printf("*");
        }
        printf("\n");
    }
}

