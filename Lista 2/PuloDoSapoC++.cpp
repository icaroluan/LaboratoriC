#include <iostream>
#include <vector>

using namespace std;

int main(){
	int N, M, i, j, p, d;
	vector<int>v;
	cin >> N>>M;
	for(i=0;i<N;i++){
		v.push_back(0);
	}
	for(i=0;i<M;i++){
		cin >> p>>d; 
		for(j=p-1;j<N;j+=d){
			v[j]=1;
		}
		for(j=p-1;j>=0;j-=d){
			v[j]=1;
		}
	}
	for(i=0;i<N;i++){
		cout <<v[i]<<endl;
	}
	
	
	return 0;
}
