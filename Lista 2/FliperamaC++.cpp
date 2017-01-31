#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N, valor , num, i, j;
	vector<int>v;
	cin >> N >> num;
	for(i=0;i<N;i++){
		cin >> valor;
		v.push_back(valor);
	}
	stable_sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	for(i=0;i<num;i++){
		cout << v[i]<<endl;
	}
	return 0;
}
