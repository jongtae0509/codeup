/**************************************************************
1718번
jongtae0509
C
정확한 풀이코드 길이:536 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main() {
	char str[20];
	char sn1[10], sn2[10];
	int n1 = 0, n2 = 0;

	fgets(str,20,stdin);
	int i = 0;
	if (str[i] == 'C') {
		i++;
		while (str[i] != 'H' && str[i] != NULL) {
			sn1[i - 1] = str[i];
			i++;
		}
		if (i >= 2)
			n1 = atoi(sn1);
		else
			n1 = 1;
	}
	if (str[i] == 'H') {
		i++;
		for (int j = i; str[j] != NULL; j++) {
			sn2[j - i] = str[j];
		}
		if (str[i] != NULL)
			n2 = atoi(sn2);
		else
			n2 = 1;
	}
	printf("%d\n", n1 * 12 + n2);
} 
