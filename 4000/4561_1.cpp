/**************************************************************
4561번
jongtae0509
C++
정확한 풀이코드 길이:515 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>

using namespace std;

struct ang{
	int a=0;
};
bool cmp(const ang &u,const ang &v){
	return u.a < v.a;
}
int main(){
	struct ang aa[8];
	struct ang aaa[8];
	int i;
	int sum=0;
	int summ=0;
	for(i=0;i<7;i++){
		scanf("%d",&aa[i].a);
		if(aa[i].a%2!=0){
			aaa[sum].a=aa[i].a;
			sum++;
		}
	}
	sort(aaa,aaa+sum,cmp);
	
	if(sum==0){
		printf("-1");
	}
	else{
	for(i=0;i<sum;i++){
		summ+=aaa[i].a;
	}
	printf("%d\n%d",summ,aaa[0].a);
	
}
	
}
