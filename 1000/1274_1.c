/**************************************************************
1274번
jongtae0509
C
정확한 풀이코드 길이:292 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
main(){
	int a, i, j;
	scanf("%d",&a);
	i=2;
	j=a-1;

       if(a==1){
		printf("not prime");
	}
	
	while(1){
		if(i<=j){ 
			if(a%i==0){  
				printf("not prime");
				break; 
			}else{
				i++;
			}
		}else{ 
			printf("prime");
			break;
		}
	} 
}
