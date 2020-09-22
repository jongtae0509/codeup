/**************************************************************
1509번
jongtae0509
C
정확한 풀이코드 길이:476 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
int main() {
	int board[10][10]={0};
	for(int y=0;y<10;y++){
		for(int x=0;x<10;x++) {
			scanf("%d",&board[y][x]);
		}
	}
	int a;
	for (int y=0;y<10;y++) {
		scanf("%d",&a);
		if (a==1)
			for(int x=0;x<10;x++)
				if(board[9-x][y]<0){
					printf("%d fall\n",y+1);
					break;
				}
				else if(board[9-x][y]>0){
					printf("%d crash\n",y+1);
					break;
				}
				else{
					if(9-x==0)
						printf("%d safe\n",y+1);
				}
	}
}
