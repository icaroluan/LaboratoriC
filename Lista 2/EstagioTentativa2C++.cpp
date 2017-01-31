#include <iostream>
#include <vector>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	vector<int>vMed;
	vector<int>vCod;
		
	int i, indicemelhor, n, j, turma,numeroM,numeroC;
	turma=1;
	cin >>n;
	
	while (n > 0)
	{
	for (i = 0; i < n; i++){
		cin>>numeroC>>numeroM;
         vMed.push_back(numeroM);
         vCod.push_back(numeroC);
         indicemelhor = 0;
		}
	for (i = 1; i < n; i++){
		if (vMed[i] > vMed[indicemelhor])
			indicemelhor = i;
		}
	cout<<"Turma "<<turma++<<endl;
	for (i = 0; i < n; i++){		
		if (vMed[i]==vMed[indicemelhor]){
			cout<<vCod[i]<<" ";
			}
		}
		cout<<endl<<endl;
	
	cin>>n;
	vMed.clear();
	vCod.clear();
	}
	return 0;
}
