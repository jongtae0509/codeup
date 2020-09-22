/**************************************************************
1521번
jongtae0509
C
정확한 풀이코드 길이:320 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int k,n,x,y,board[100][100]={},sum=0;
	scanf("%d %d",&k,&n);
	for(y=1;y<=k;y++){
		for(x=1;x<=k;x++){
			scanf("%d",&board[y][x]);
			if(board[y][x]==-1){
				continue;
			}
			board[y][x]+=n;
			if(board[y][x]>5){
				continue;
			}
			sum++;
		}
	}
	printf("%d",sum);
}
