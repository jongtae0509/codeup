/**************************************************************
1469번
jongtae0509
C
정확한 풀이코드 길이:354 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main() {
	
	int input;
	scanf("%d", &input);
	
	for (int i = 1; i <= input; i++) {
		i--;
		if (i % 2 == 0) {
			for (int j = input; j > 0; j--) {
				printf("%d ", (i*input)+j);
			}
		}
		else
			for (int j = 1; j <= input; j++) {
				printf("%d ", (i*input)+j);
			}
		i++;
		printf("\n");
	}
	return 0;
}
