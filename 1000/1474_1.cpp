/**************************************************************
1474번
jongtae0509
C++
정확한 풀이코드 길이:552 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
int main()
{
    int a[101][101]={};
    int n,m,t=1,k=1;
    scanf("%d %d",&n,&m);
    for(int i=m;i>=1;i--){
        if(k%2==0){
            for(int j=1;j<=n;j++){
                a[j][i]=t;
                t++;
            }
        }
        else{
            for(int j=n;j>=1;j--){
                a[j][i]=t;
                t++;
            }
        }
        k++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%d ",a[i][j]);
        }
        puts("");
    }
}
