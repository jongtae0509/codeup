/**************************************************************
1904번
jongtae0509
C
정확한 풀이코드 길이:255 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>

void ang(int aa,int bb){
	if(aa==bb+1){
	return;
	}
	else{
		if(aa%2!=0){
			printf("%d\n",aa);
			ang(aa+1,bb);
		}
		else{
			ang(aa+1,bb);
		}
	}
	
	
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	ang(a,b);
}
