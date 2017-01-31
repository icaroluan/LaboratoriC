# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

struct vencedor{
	int voltas;
	int posicao;
};

bool carros(vencedor i, vencedor j){
	return (i.voltas < j.voltas || i.voltas == j.voltas && i.posicao == j.posicao);
}

int main(){
	int N, M, h, k, soma=0, valor;
	vector<vencedor>v;
	vencedor tmp;

	cin>>N>>M;
	for(h=1,soma=0;h<=N;h++,soma=0){
		for(k=0;k<M;k++){
			cin>>valor;
			soma+=valor;
		}
		tmp.voltas=soma;
		tmp.posicao=h;
		v.push_back(tmp);
	}
	stable_sort(v.begin(),v.end(),carros);
	for(k=0;k<3;k++){
		cout<<v[k].posicao<<endl;
	}
	
	
	return 0;
}
