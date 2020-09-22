/**************************************************************
1285번
jongtae0509
C
정확한 풀이코드 길이:425 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
 
int main()
{
    int n, sum=0;
    char a;
    scanf("%d",&n);
	sum=n;
    while(1)
    {
        scanf("%c",&a);
        if (a=='='){
		break;
		}
        scanf("%d",&n);
        if(a=='+'){
		sum+=n;
		}
        else if(a=='-'){
        sum-=n;	
		}
        else if (a=='*'){
        sum*=n;	
		}
        else if (a=='/'){
        sum/=n;	
		}
    }
    printf("%d",sum);
}
