/**************************************************************
1548번
jongtae0509
C
정확한 풀이코드 길이:303 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int n;



char grade()
{
    if(n>=90)
    return 'A';
    if(n>=80&&n<90)
    return 'B';
    if(n>=70&&n<80)
    return 'C';
    if(n>=60&&n<70)
    return 'D';
    else
    return 'F';
}
int main()
{
  scanf("%d", &n);
  printf("%c", grade(n));
  return 0;
}
