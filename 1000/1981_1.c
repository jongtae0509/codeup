/**************************************************************
1981번
jongtae0509
C
정확한 풀이코드 길이:170 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
int main()
{
    FILE *fi = fopen("secret.dic","r");
    char c;
    while(fscanf(fi,"%c",&c)!=EOF)
        printf("%c", c); 
    fclose(fi);
}
