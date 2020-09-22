/**************************************************************
1577번
jongtae0509
C
정확한 풀이코드 길이:173 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int myabs(int a){
	if(a<0){
		return a*-1;
	}
	else{
		return a;
	}
}
main()
{
    int a;
    scanf("%d", &a);
    printf("%d", myabs(a));
}
