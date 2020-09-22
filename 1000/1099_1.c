/**************************************************************
1099번
jongtae0509
C
정확한 풀이코드 길이:685 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main()
{
    int map[11][11];
    int x, y;
    
    for(y=1; y<=10; y++)
        for(x=1; x<=10; x++)
            scanf("%d", &map[y][x]);
    
    x=y=2;
    
    while(1)
    {
        if(map[y][x]==2) {
            map[y][x]=9;
            break;
        }
        
        map[y][x]=9;
        
        if(map[y][x+1]==0 || map[y][x+1]==2) x++;
        else if(map[y][x+1]==1) {
            if(map[y+1][x]==0 || map[y+1][x]==2) y++;
            else break;
        }
    }
    
    for(y=1; y<=10; y++) {
        for(x=1; x<=10; x++) {
            printf("%d ", map[y][x]);
        }
        printf("\n");
    }
    
}  
