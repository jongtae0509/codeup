/**************************************************************
4682번
jongtae0509
C++
정확한 풀이코드 길이:532 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
	int n,dice[3],max=0,t=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&dice[0],&dice[1],&dice[2]);
		if(dice[0]==dice[1]&&dice[1]==dice[2]){
		t=10000+(dice[0]*1000);
		}
		else if(dice[0]==dice[1]||dice[1]==dice[2]){
		t=1000+(dice[1]*100);
		}
		else if(dice[0]==dice[2]){
	    t=1000+(dice[0]*100);
		}
		else{
			sort(dice,dice+3);
			t=dice[2]*100;
		}
		if(t>max){
			max=t;
		}			
	}
    printf("%d",max);
}

