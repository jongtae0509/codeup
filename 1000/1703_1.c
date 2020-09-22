/**************************************************************
1703번
jongtae0509
C
정확한 풀이코드 길이:249 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main() {
	int second, hour=0, minute=0;

	scanf("%d", &second);

	minute = second / 60;
	hour = minute / 60;
	minute =minute % 60;
	second =second % 60;

	printf("%d %d %d", hour, minute, second);

	return 0;
}
