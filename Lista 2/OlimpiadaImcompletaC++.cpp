#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct OlimpiadaG{
	int Ouro;
	int Prata;
	int Broze;
	int total;
	int pos;
};


bool ganhador(OlimpiadaG x, OlimpiadaG y){
	return(x.Ouro>y.Ouro || x.Ouro==y.Ouro && x.Prata>y.Prata || x.Prata==y.Prata && x.Broze>y.Broze || x.Broze==y.Broze && x.total>y.total || x.total==y.total && x.pos==y.pos);
}

int main(){
	ios_base::sync_with_stdio(false);
	int i, j, O, P, B, N, M;
	OlimpiadaG tmp;
	vector<OlimpiadaG>v;
	
	cin>>N>>M;
	for(i=1;i<=N;i++){
		tmp.pos=i;
		v.push_back(tmp);
	}
	
	for(j=1;j<=M;j++){
		cin>>O>>P>>B;
		v[O].Ouro++;
		v[P].Prata++;
		v[B].Broze++;
		v[O].total++;
		v[P].total++;
		v[B].total++;
		
	}
	stable_sort(v.begin(),v.end(),ganhador);
	
	for(i=0;i<N;i++){
		cout<<v[i].pos<<" ";
	}
	
	return 0;
}
