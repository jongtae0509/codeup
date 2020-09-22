/**************************************************************
1172번
jongtae0509
C
정확한 풀이코드 길이:1264 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


	#include<stdio.h>
	int main()
	{
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		if(a<b){
			if(a<c){
				if(b<c){
					printf("%d %d %d",a,b,c);
				}
				else{
					printf("%d %d %d",a,c,b);
				}
			}
			else{
				printf("%d %d %d",c,a,b);
			}
		}
		else if(a<c){
			if(a<b){
				if(c<b){
					printf("%d %d %d",a,c,b);
				}
				else{
					printf("%d %d %d",a,b,c);
				}
			}
			else{
				printf("%d %d %d",c,a,b);
			}
		}
		else if(b<a){
			if(b<c){
				if(a<c){
					printf("%d %d %d",b,a,c);
				}
				else{
					printf("%d %d %d",b,c,a);
				}
			}
			else{
				printf("%d %d %d",c,b,a);
			}
		}
		else if(b<c){
			if(b<a){
				if(a<c){
					printf("%d %d %d",b,a,c);
				}
				else{
					printf("%d %d %d",b,c,a);
				}
			}
			else{
				printf("%d %d %d",c,b,a);
			}
		}
		else if(c<a){
			if(c<b){
				if(a<b){
					printf("%d %d %d",c,a,b);
				}
				else{
					printf("%d %d %d",c,b,a);
				}
			}
			else{
				printf("%d %d %d",b,c,a);
			}
		}
		else if(c<b){
			if(c<a){
				if(a<b){
					printf("%d %d %d",c,a,b);
				}
				else{
					printf("%d %d %d",c,b,a);
				}
			}
			else{
				printf("%d %d %d",b,c,a);
			}
		}
		else
		printf("%d %d %d",a,b,c);
	}

