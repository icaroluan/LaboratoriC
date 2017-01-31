#include <iostream>
#include <vector>

using namespace std;

int main(){
	int i, j, N, M, e, s;
	vector<int>v;
	cin>>N;
	for(i=0;i<N;i++){
		cin>>e;
		v.push_back(e);
	}
	cin>>M;
	for(i=0;i<M;i++){
		cin>>s;
		for(j=0;j<v.size();j++){
			if(v[j]==s){
				v.erase(v.begin()+j);
			}
		}
	}
	for(i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	
	return 0;
}


