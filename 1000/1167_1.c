/**************************************************************
1167번
jongtae0509
C
정확한 풀이코드 길이:751 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b){
		if(a==c){
		printf("%d",a);
		}
		else{
			printf("%d",a);
		}
	}
	else if(a==c){
		if(a==b){
			printf("%d",a);
		}
		else{
			printf("%d",a);
		}
	}
	else if(b==c){
		if(b==a){
			printf("%d",b);
		}
		else{
			printf("%d",b);
		}
	}
	else if(a>b){
    	if(b>c){
    		printf("%d",b);
		}
		else if(c>b){
			if(c>a){
				printf("%d",a);
			}
			else if(b<c){
				printf("%d",c);
			}
			else printf("%d",b);
		}
	}
	else if(b>a){
		if(a>c){
			printf("%d",a);
		}
		else if(c>a){
			if(c>b){
				printf("%d",b);
			}
			else if(a<c){
				printf("%d",c);
			}
			else printf("%d",b);
		}
	}

}
	

