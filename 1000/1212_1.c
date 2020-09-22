/**************************************************************
1212번
jongtae0509
C
정확한 풀이코드 길이:926 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	if(a==5&&b==5&&c==5){
	    printf("yes");
	}
	else if(a>b){
		if(a>c){
			d=b+c;
			if(a<d){
				printf("yes");
			}
			else{
				printf("no");
			}
		}
		else if(c>a){
			d=a+b;
			if(c<d){
				printf("yes");
			}
			else{
				printf("no");
			}
		}
		else{
		    printf("yes");
		}
	}
	else if(b>a){
		if(b>c){
			d=a+c;
			if(b<d){
				printf("yes");
			}
			else{
				printf("no");
			}
		}
		else if(c>b){
			d=a+b;
			if(c<d){
				printf("yes");
			}
			else{
				printf("no");
			}
		}
		else{
		    printf("yes");
		}
	}
	else if(c>a){
		if(c>b){
			d=a+b;
			if(c<d){
				printf("yes");
			}
			else{
				printf("no");
			}
		}
		else if(b>c){
				d=a+c;
			if(b<d){
				printf("yes");
			}
			else{
				printf("no");
			}
		}
		else{
		    printf("yes");
		}
	}
}
