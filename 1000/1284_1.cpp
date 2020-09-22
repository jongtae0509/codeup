/**************************************************************
1284번
jongtae0509
C++
정확한 풀이코드 길이:533 byte(s)
수행 시간:193 ms
메모리 :80028 kb
****************************************************************/


#include<iostream>
using namespace std;
int main(){
	int a[10000000];	
	int n,arr[10000000];
	cin >> n;
	for (int i=2;i<=n;i++) {
        arr[i]=i;
    }
	for(int i=2;i*i<=n;i++){
		if(arr[i]==0) continue;
		for(int j=i+i;j<=n;j+=i){
			arr[j]=0;
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			a[cnt]=arr[i];
			cnt++;
		}
	}
	for(int i=0;i<cnt;i++){
		for(int j=i;j<cnt;j++){
			if(a[i]*a[j]==n){
			    cout << a[i] << " " << a[j];
			    return 0;
			}
		}
	}
	puts("wrong number");
}
