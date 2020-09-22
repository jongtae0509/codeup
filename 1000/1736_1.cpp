/**************************************************************
1736번
jongtae0509
C++
정확한 풀이코드 길이:303 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main() {
	int second, hour=0, minute=0,day=0;

	scanf("%d", &second);
	
	minute = second / 60;
	hour = minute / 60;
	day = hour / 24;
	hour = hour % 24;
	minute =minute % 60;
	second =second % 60;

	printf("%d %d %d %d",day,hour, minute, second);

	return 0;
}

