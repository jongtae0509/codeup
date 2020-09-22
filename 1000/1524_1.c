/**************************************************************
1524번
jongtae0509
C
정확한 풀이코드 길이:422 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
    int y,x,board[11][11]={ 0, },r,c,ji=0;
    for (y=1;y<10;y++){
        for (x=1;x<10;x++){
            scanf("%d",&board[y][x]);
        }
    }
    scanf("%d %d",&r,&c);
    if (board[r][c]==1){
        printf("-1");
        return 0;
    }
    for (y=r-1;y<=r+1;y++){
        for (x=c-1;x<=c+1;x++){
            ji+=board[y][x];
        }
    }
    printf("%d",ji);
}
