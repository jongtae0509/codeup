/**************************************************************
1525번
jongtae0509
C++
정확한 풀이코드 길이:1192 byte(s)
수행 시간:0 ms
메모리 :2884 kb
****************************************************************/


#include<iostream>
using namespace std;
int main(){
	int map[500][500]={};
	int n,x[80],y[80],t,check[80]={};
	for(int i=1;i<11;i++){
		for(int j=1;j<11;j++){
			cin >> map[j][i];
		}
	}
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x[i]>> y[i];
	}
	for(int i=1;i<11;i++){
		for(int j=1;j<11;j++){
			if(map[j][i]>=1){
				t=map[j][i];
				map[j][i]=-2;
				for(int z=1;z<=t;z++){
					if(map[j][i+z]==-1) break;
					if(map[j][i+z]==0) map[j][i+z]=-2;
				}
				for(int z=1;z<=t;z++){
					if(map[j][i-z]==-1) break;
					if(map[j][i-z]==0) map[j][i-z]=-2;
				}
				for(int z=1;z<=t;z++){
					if(map[j+z][i]==-1) break;
					if(map[j+z][i]==0) map[j+z][i]=-2;
				}
				for(int z=1;z<=t;z++){
					if(map[j-z][i]==-1) break;
					if(map[j-z][i]==0) map[j-z][i]=-2;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		if (map[y[i]][x[i]]==0){
			map[y[i]][x[i]]=i+1;
			check[i]++;
		}
	}
	for(int i=1;i<11;i++){
		for(int j=1;j<11;j++){
			cout << map[j][i] << " ";	
		}
		puts("");
	}
	puts("Character Information");
	for(int i=0;i<n;i++){
		if(check[i]==0) printf("player %d dead",i+1);
		else printf("player %d survive",i+1);
		puts("");
	}
}
