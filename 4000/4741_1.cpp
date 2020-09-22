/**************************************************************
4741번
jongtae0509
C++
정확한 풀이코드 길이:286 byte(s)
수행 시간:0 ms
메모리 :2024 kb
****************************************************************/


#include<iostream>

using namespace std;

int main()
{
 int h, m, limit, t;
 cin >> h >> m;
 cin >> limit;
 while (limit!=0){
  if (60<m+limit){
   h++;
   if(h==24) h=0;
   limit-=60-m;
   m=0;
  }
  else{
   m+=limit;
   limit=0;
  }
 }
 cout << h << " " << m;
}
