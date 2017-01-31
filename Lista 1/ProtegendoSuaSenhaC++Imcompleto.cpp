# include <iostream>
# include <cstdlib> 
# include <vector> 
# include <cstring>

using namespace std;


int main(){
	char letra;
	int N, i, j, k, h, Teste=1;
	char numero;
	vector<char>vN;
	vector<char>senha;
	vector<char>aux;
	cin >> N;
	while(N!=0){
		for(i=0;i<N;i++){
			for(j=0;j<16;j++){
				cin >>numero;
				vN.push_back(numero);
				switch(vN[j]){
					case 'A':
						'A'=vN[0,1];
						break;
					case 'B':
						'B'=vN[2,3];
						break;
					case 'C':
						'C'=vN[4,5];
						break;
					case 'D':
						'D'=vN[6,7];
						break;
					case 'E':
						'E'=vN[8,9];
						break;
				}
				if(i>=1){
					aux.push_back(numero);
					switch(aux[j]){
						case 'A':
							'A'=aux[0,1];
							break;
						case 'B':
							'B'=aux[2,3];
							break;
						case 'C':
							'C'=aux[4,5];
							break;
						case 'D':
							'D'=aux[6,7];
							break;
						case 'E':
							'E'=aux[8,9];
							break;
					}
				}
			}
			if(1<=i<=9){
				for(k=11;k<16;k++){
					if(vN[k]==aux[k]){
						senha.push_back(vN[k]);
					}
				}
				aux.clear();
			}
		}
		for(h=0;h<senha.size();h++){
			cout<<senha[h]<<" ";
		}
		cin >> N;
		vN.clear();
		senha.clear();
	}
	
	return 0;
}
