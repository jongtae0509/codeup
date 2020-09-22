/**************************************************************
4832번
jongtae0509
C
정확한 풀이코드 길이:307 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

char a[5][15];

int main() {

	int i, j;

	for(i=0; i<5; i++) {

		scanf("%s", a[i]);

	}

	for(j=0; j<15; j++) {

		for(i=0; i<5; i++) {

			if(a[i][j] == NULL)

				continue;

			else

				printf("%c", a[i][j]);

		}

	}

	printf("\n");

	return 0;

}
