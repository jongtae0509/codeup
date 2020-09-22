/**************************************************************
2112번
jongtae0509
C++
정확한 풀이코드 길이:299 byte(s)
수행 시간:533 ms
메모리 :2120 kb
****************************************************************/


#include <iostream>
#include <cmath>
using namespace std;
 int main(){
    int n,i,a,b,t;
    double q=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a >> b;
        if(b*log(a)>q){
            q=b*log(a);
            t=i+1;
        }
    }
    printf("%d",t);
    return 0;
}
