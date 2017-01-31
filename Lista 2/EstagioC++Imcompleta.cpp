# include <iostream>
# include <vector>

using namespace std;

struct Aluno{
	int id;
	int NotaFinal;
};


int main(){
	ios_base::sync_with_stdio(false);
	Aluno a;
	vector<Aluno>v;
	int i, melhoresAlunos, N, Nota, NumEst, Teste=1;
	cin >> N;
	while(N!=0){
		cout <<"Teste "<<Teste<<endl;
		for(i=0;i<N;i++){
			cin >> NumEst>>Nota;
			a.id=NumEst;
			a.NotaFinal=Nota;
			v.push_back(a);
		}
		melhoresAlunos=0;
		for(i=0;i<N;i++){
			if(v[i].NotaFinal>v[melhoresAlunos].NotaFinal){
				melhoresAlunos=i;
			}
		}
		for(i=0;i<N;i++){
			if(v[i].NotaFinal==v[melhoresAlunos].NotaFinal){
				cout<<v[i].id<<" ";
			}
		}
		cout<<endl<<endl;
		Teste++;
		cin >> N;
		v.clear();
	}
	
	return 0;
}
