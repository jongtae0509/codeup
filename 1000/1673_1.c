/**************************************************************
1673번
jongtae0509
C
정확한 풀이코드 길이:218 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
 
int main(){
    int a,b,c,i;
    scanf("%d %d %d",&a,&b,&c);
    for(i=a;i>=1;i--){
        if(a%i==0&&b%i==0&&c%i==0){
            printf("%d",i);
            break;
        }
    }
}

