/**************************************************************
1676번
jongtae0509
C
정확한 풀이코드 길이:343 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
int main(){
	int n,f[2001],f1[2001],rank=1,bb[2001]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&f[i]);
		f1[i]=f[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(f[i]<f1[j]){
				rank++;
			}
			
		}
		bb[i]=rank;
		rank=1;
	}
	for(int i=0;i<n;i++){
		printf("%d\n",bb[i]);
	}
}
