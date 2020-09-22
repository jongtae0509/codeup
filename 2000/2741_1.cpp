/**************************************************************
2741번
jongtae0509
C++
정확한 풀이코드 길이:404 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
#include <string.h>

int main()
{
    char a[26];
    scanf("%s", a);
    int a2[26];

    char real[101];
    scanf("%s", real);

    int c;
    int c2;
    for(c = 0 ; c<strlen(real); c++)
    {
        for(c2 = 0; c2<strlen(a); c2++)
        {
            if(a[c2] == real[c])
            {
                printf("%c",97+c2);
            }
        }
    }
}
