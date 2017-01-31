# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

int main(){
	string nome;
	vector<string>v;
	int i,alunos,premiado;
	
	cin>>alunos>>premiado;
	for(i=0;i<alunos;i++){
		cin>>nome;
		v.push_back(nome);
	}
	stable_sort(v.begin(),v.end());
	cout<<v[premiado-1]<<endl;
	
	
	return 0;
}
