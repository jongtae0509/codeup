/**************************************************************
1451번
jongtae0509
C++
정확한 풀이코드 길이:298 byte(s)
수행 시간:0 ms
메모리 :5416 kb
****************************************************************/


#include <stdio.h>
#include <algorithm>
using namespace std;
 
int N, i;
int arr[1100000];
  
int main()
{
    scanf("%d",&N);
    for(i=0; i<N; i++)
        scanf("%d",&arr[i]);
  
    sort(arr, arr+N);
  
    for(i=0; i<N; i++)
        printf("%d\n",arr[i]);
  
    return 0;
}
