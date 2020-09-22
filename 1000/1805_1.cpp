/**************************************************************
1805번
jongtae0509
C++
정확한 풀이코드 길이:519 byte(s)
수행 시간:0 ms
메모리 :1120 kb
****************************************************************/


#include<stdio.h>
#include<algorithm>

using namespace std;

struct gidong{
	int a,b;
};

bool cmp(const gidong &u, const gidong &v) {
    if (u.a < v.a) {
        return true;
    }
    else if (u.a == v.a) {
        return u.b < v.b;
    }
    else {
        return false;
    }
}

int main(){
	struct gidong g[100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&g[i].a,&g[i].b);
	}
	
	sort(g,g+n,cmp);
	
	for(i=0;i<n;i++){
		printf("%d %d\n",g[i].a,g[i].b);
	}
	
}
