/**************************************************************
1286번
jongtae0509
C
정확한 풀이코드 길이:302 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
#include <limits.h>

int main() {
    
	int a;
	int max=INT_MIN;
	int min=INT_MAX;
	for(int i=1; i<=5; i++){
	    scanf("%d", &a);
	    
	    if(a>max)
	        max=a;
	    if(a<min)
	        min=a;
	}
	
	printf("%d\n", max);
	printf("%d\n", min);
	
	return 0;
}
