#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n,soma=0,r=0, numeroD,cont=0;
	vector<int>v;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>numeroD;
		v.push_back(numeroD);
		soma+=numeroD;
	}
	soma=soma/2;
	for(int i=0;i<n;i++){
		r+=v[i];
		cont++;
		if(r==soma){
			break;
		}
	}
	cout<<cont<<endl;
	return 0;
	}
