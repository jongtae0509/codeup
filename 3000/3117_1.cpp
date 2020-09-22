/**************************************************************
3117번
jongtae0509
C++
정확한 풀이코드 길이:400 byte(s)
수행 시간:18 ms
메모리 :2684 kb
****************************************************************/


#include <iostream>
#include <stack>
 
using namespace std;
 
int main(){
    stack<int> s;
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == 0){
            sum -= s.top();
            s.pop();
        }else{
            s.push(arr[i]);
            sum += s.top();
        }
    }
    cout << sum;}
