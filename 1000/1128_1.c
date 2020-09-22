/**************************************************************
1128번
jongtae0509
C
정확한 풀이코드 길이:1079 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

void carry(int returnValueindex);
int returnValue[11] = {};

int main()
{
	int inputNum;
	int multiple[9][3];
	

	scanf("%d", &inputNum);

	for (int i = 1; i <= 9; i++) {
		int eachValue = i * inputNum;
		multiple[i - 1][0] = eachValue / 100;
		multiple[i - 1][1] = (int)((eachValue % 100) / 10);
		multiple[i - 1][2] = eachValue %10;
	}

	for (int digit = 0; digit < 9; digit++) {
		for (int i = 0; i < 3; i++) {
			returnValue[digit + i] += multiple[digit][i];
			carry(digit + i);

		}
		
	}
	int willprintZero = 0;
	for (int digit = 0; digit < 11; digit++) {
		if (returnValue[digit] != 0)
			willprintZero = 1;
		if (willprintZero == 0)
			continue;
		printf("%d", returnValue[digit]);
	}
	return 0;
}

void carry(int returnValueindex) {
	if (returnValue[returnValueindex] >=10) {
		returnValue[returnValueindex - 1] += 1;
		int oneValue = returnValue[returnValueindex] % 10;
		returnValue[returnValueindex] = oneValue;
	}
	if (returnValue[returnValueindex - 1] >= 10) {
		carry(returnValueindex - 1);
	}
}
