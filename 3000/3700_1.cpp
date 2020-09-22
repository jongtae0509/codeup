/**************************************************************
3700번
jongtae0509
C++
정확한 풀이코드 길이:416 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include<iostream>
using namespace std;
int main(){
    int n;
    int max=-9999999;
    int sum=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if(n==1){
    	cout << a[0];
    	return 0;
	}
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum>max) max=sum;
        }
        sum=0;
    }
    cout << max;
}
