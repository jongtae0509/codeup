/**************************************************************
2631번
jongtae0509
C++
정확한 풀이코드 길이:605 byte(s)
수행 시간:18 ms
메모리 :2296 kb
****************************************************************/


#include <iostream>
using namespace std;
int main(){
	int n,i,s,e,sum,k;
	int a[100001],c=0;
    cin >> n >> k;
    for(i=0;i<n;i++) cin >> a[i];
    s=0,e=0;
    sum=a[0];
    while(e<n){
        if(sum<k){
                e++;
                sum+=a[e];
            }
        if(sum==k){
                c++;
                sum-=a[s];
                s++;
                if(s>e)
                    e++;
            }
        if(sum>k){
                sum-=a[s];
                s++;
                if(s>e)
                    e++;
            }
    }
    cout << c;
}

