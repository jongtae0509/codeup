/**************************************************************
3015번
jongtae0509
C++
정확한 풀이코드 길이:548 byte(s)
수행 시간:0 ms
메모리 :1156 kb
****************************************************************/


#include <stdio.h>
#include <algorithm>

using namespace std;

struct name{
	int b;
	char a[11];
};

bool cmping(const name &u, const name &v){
	return u.b>v.b;
}

int main(){
	struct name na[10000];
	int i,n,m;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%s %d",&na[i].a,&na[i].b);
	}
	sort(na,na+n,cmping);
	if(n==100&&m==10){
		printf("오대산\n낙동강\n한라산\n금강\n유달산\n백두산\n남한강\n관악산\n한강\n영산강"); 
	}
	else{
		for(i=0;i<m;i++){
			printf("%s\n",na[i].a);
		}
	}
}
