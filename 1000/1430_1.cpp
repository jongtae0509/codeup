/**************************************************************
1430번
jongtae0509
C++
정확한 풀이코드 길이:510 byte(s)
수행 시간:1400 ms
메모리 :41636 kb
****************************************************************/


#include <iostream>
#include <stdlib.h> 	//동적배열 
#include <algorithm>	//sort

using namespace std;

int main()
{	
	ios_base::sync_with_stdio(false);
	int N,M,i;
	
	cin >> N;
	
	int *a = new int[N];
	
	for(i=0;i<N;i++)
		cin >> a[i];
		
	cin >> M;
	
	int *b = new int[M];
	
	for(i=0;i<M;i++)
		cin >> b[i];
	
	sort(a,a+N);
	
	for(i=0;i<M;i++){
		if(binary_search(a,a+N,b[i]))
			cout << "1 ";
		else
			cout << "0 ";	
	}
	
	delete[] a;
	delete[] b;
	
	return 0;
}

