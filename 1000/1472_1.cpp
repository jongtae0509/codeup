/**************************************************************
1472번
jongtae0509
C++
정확한 풀이코드 길이:591 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
int main(){
    int arr[101][101]={};
    int n,m;
    scanf("%d %d",&n,&m);
    int x = 1;
    int k = 1;
    for(int i=n;i>=1;i--){
        if(k%2 == 0){
            for(int j=1;j<=m;j++){
                arr[i][j]=x;
                x++;
            }
        }
        else{
            for(int j=m;j>=1;j--){
                arr[i][j]=x;
                x++;
            }
        }
        k++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
 
