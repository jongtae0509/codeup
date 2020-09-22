/**************************************************************
4041번
jongtae0509
C
정확한 풀이코드 길이:372 byte(s)
수행 시간:0 ms
메모리 :1976 kb
****************************************************************/


#include <stdio.h>
#include <string.h>

int main()
{
	char a[1000000];
    int sum=0,b=0;
    scanf("%s",a);
    for (int i=strlen(a)-1;i>=0;i--)
    {
        if (b==0&&a[i]-'0'!=0)
        {
            b=1;
        }
        if (b==1)
        {
            printf("%d",a[i]-'0');
            sum+=a[i]-'0';
        }
    }
    printf("\n%d",sum);
}
