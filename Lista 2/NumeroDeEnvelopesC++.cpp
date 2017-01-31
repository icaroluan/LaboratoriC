#include <iostream>
#include <vector>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int n, k, x, i, j, m;
	vector<int>v;
	cin>>n>>k;
	for(i=0;i<n;i++){
		v.push_back(0);
	}
	for(i=0;i<n;i++){
		cin>>x;
		v[x]++;
	}
	m=v[1];
	for (i=2;i<=k;i++){
	    if (v[i]<m)
    	  m=v[i];
	}
  	cout<<m<<endl;

	return 0;
}
