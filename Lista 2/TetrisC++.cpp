#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

struct tetris{
	int valor;
	string nome;
	
};


int ganhador(tetris x, tetris y){
	if(x.valor==y.valor){
		return (x.nome<y.nome || x.nome==y.nome);
	}
	return(x.valor>y.valor || x.valor==y.valor);
}

int main(){
	ios_base::sync_with_stdio(false);
	tetris tmp;
	vector<tetris>v;
	vector<int>Vvalor;
	string n;
	int Teste=1, NumeroJogadores, i, j, soma=0, valores, somaJogador,menor,maior,nu,margem=25000;
	cin >> NumeroJogadores;
	while(NumeroJogadores!=0){
		for(i=1;soma=0,i<=NumeroJogadores;i++){
			cin>>n;
			tmp.nome=n;
			for(j=0,maior=0,menor=1001,soma=0;j<12;j++){
				cin>>valores;
				Vvalor.push_back(valores);
				soma+=valores;
				if(valores < menor)
                    menor = valores;
                if(valores > maior)
                    maior = valores;
			}
			soma=soma-(menor+maior);
			
			tmp.valor=soma;
		
			v.push_back(tmp);
		}
		stable_sort(v.begin(),v.end(),ganhador);
		cout<<"Teste "<<Teste++<<endl;
		for(i=0;i<NumeroJogadores;i++){
			
			if(v[i].valor!=margem){
				nu=i+1;
				margem=v[i].valor;
			}
			cout<<nu<<" "<<v[i].valor<<" "<<v[i].nome<<endl;
		
		}
	
		cout<<endl;
		cin >> NumeroJogadores;
		v.clear();
		Vvalor.clear();
		soma=0;
	}
	return 0;
}
