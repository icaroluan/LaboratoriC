#include <iostream>
#include <vector>

using namespace std;

struct Indentificadores{
	int Posicao;
	int EstadoPart;
}; 


int main(){
	ios_base::sync_with_stdio(false);
	Indentificadores id;
	int Participantes, Rodadas, NumeroPart, OrdemChefe, i, j, Teste=1, posicoes, estados;
	vector<Indentificadores>v;
	cin >>Participantes>>Rodadas;
	while((Participantes || Rodadas)!=0){
		for(i=0;i<Participantes;i++){
			cin>>posicoes;
			id.Posicao=posicoes;
			v.push_back(id);
		}
		for(i=0;i<Rodadas;i++){
			cin >>NumeroPart>>OrdemChefe;
			for(j=0;j<NumeroPart;j++){
				cin>>estados;
				id.EstadoPart=estados;
				v.push_back(id);
				if(id.EstadoPart!=OrdemChefe){
					v.erase(v.begin()+id.Posicao);
				}
			}
		}
		cout << v.id.Posicao<<endl;
	}
	cin>>Participantes>>Rodadas;
	Teste++;
	return 0;
}
