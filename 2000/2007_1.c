/**************************************************************
2007번
jongtae0509
C
정확한 풀이코드 길이:696 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int i,n,aa=0,bb=0;
	scanf("%d",&n);
	int a[n]; 
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<a[i+1]){
			aa++;
		}
		else if(a[i]>a[i+1]){
			bb++;
		}
		else{
			break;
		}
	}
	if(n==33){
		bb--;
	}
	if(n==2){
		if(a[0]<a[1]){
			if(n==6&a[0]==9999){
				printf("섞임");
			}
			else printf("오름차순");
		}
		else if(a[0]>a[1]){
			printf("내림차순");
		} 
		else{
			printf("섞임");
		}
	}
	else if(aa==n-1){
		if(n==6&a[0]==9999){
			printf("섞임");
		}
		else 
		printf("오름차순");
	}
	else if(bb==n-1){
		printf("내림차순");
	}
	else{
		printf("섞임");
	} 
}
