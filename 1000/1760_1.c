/**************************************************************
1760번
jongtae0509
C
정확한 풀이코드 길이:255 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
int main()
{
    int i,j;
    char s[11],a[15];
    scanf("%s ",s);
    fgets(a,15,stdin);
    for(i=0;i<15;i++)
    {
        for(j=0;j<10;j++)
            if (s[j]==a[i]){
			a[i]='0'+j;
			}
    }
    printf("%s",a);
}