#include <iostream>
#include <vector>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int i, x, valor;
	cin>>x;
	vector<int>v(x+2);
	vector<int>a(x+2);
	for(i=1;i<x+1;i++){
		cin>>v[i];
	}
	v[0]=0;
	v[x+1]=0;
	for(i=0;i<x;i++){
		a[i]=0;
	}
	for(i=1;i<x+1;i++){
		a[i]=v[i]+v[i+1]+v[i-1];
		cout<<a[i]<<endl;
		
	}
	return 0;
}
