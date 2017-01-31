#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

int funcao_senha(vector<int> senha){
	int pessoaSenha=senha[0];
	int cont=0;
	for(int i=0;i<senha.size();i++){
		if(pessoaSenha==senha[i]){
			cont++;
		}
		else if(cont==0){
			pessoaSenha=senha[i];
			cont++;
		}
		else{
			cont--;
		}
	}
	
	return pessoaSenha;
	}
int main(){
	ios_base::sync_with_stdio(false);
	vector< vector<int> >v;
	int N, entradaP[11][11],Teste=1,pos,i,j;
	char entradaSenha;
	cin>>N;
	for(i=0;i<10;i++){
		vector <int> vS;
		v.push_back(vS);
	}
	while(N!=0){
		for(i=0;i<N;i++){
			for(j=1;j<11;j++){
				cin>>entradaP[i][j];
			}
			for(j=0;j<6;j++){
				cin>>entradaSenha;
				pos=entradaSenha-'A';
				pos+=1;
				v[j].push_back(entradaP[i][(pos*2)-1]);
				v[j].push_back(entradaP[i][(pos*2)]);
			}
		}
		cout<<"Teste "<<Teste++<<endl;
		for(i=0;i<6;i++){
			stable_sort(v[i].begin(),v[i].end());
			cout<<funcao_senha(v[i])<<" ";
			v[i].clear();
		}
		cout<<endl<<endl;
		cin>>N;
	}
	return 0;
}

