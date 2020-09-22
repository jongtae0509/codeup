/**************************************************************
1218번
jongtae0509
C
정확한 풀이코드 길이:577 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c)
    {
        if (a == b && b == c)
        {
            printf("정삼각형\n");
        }
        else if (a * a + b * b == c * c)
        {
            printf("직각삼각형\n");
        }
        else if (a == b || a == c || b == c)
        {
            printf("이등변삼각형\n");
        }
        else
        {
            printf("삼각형\n");
        }
    }
    else
    {
        printf("삼각형아님\n");
    }

}
