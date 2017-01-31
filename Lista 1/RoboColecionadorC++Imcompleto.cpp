#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstring>

using namespace std;

struct movimentos{
	int movimentosL,movimentosC,movimentosPL,movimentosPC;
}movimentos;


int main(){
	ios_base::sync_with_stdio(false);
	int N,M,S,i,j,h,cont=0;
	cin >>N>>M>>S;
	while((N && M && S)!=0){
		char v[N][M];
	 	char comandos[S];
		for(i=0;i<N;i++){
			for(j=0;j<M;j++){
				cin>>v[i][j];
				if((v[i][j]!='.') && (v[i][j]!='*' ) && (v[i][j]!='#')){
					movimentos.movimentosL=i;
					movimentos.movimentosC=j;
					switch(v[i][j]){
						case 'N':
							movimentos.movimentosPL=i-1;
							movimentos.movimentosPC=j;
							break;
						case 'O':
							movimentos.movimentosPL=i;
							movimentos.movimentosPC=j-1;
							break;
						case 'L':
							movimentos.movimentosPL=i;
							movimentos.movimentosPC=j+1;
							break;
						case 'S':
							movimentos.movimentosPL=i+1;
							movimentos.movimentosPC=j;
							break;
					}
				}
			}
		}
		cin>>comandos;
		for(h=0;h<S;h++){
			switch(comandos[h]){
				case 'F':
					if((v[movimentos.movimentosPL][movimentos.movimentosPC]!='#')
					&&
					((movimentos.movimentosPL>-1)&&(movimentos.movimentosPL<N))
					&&
					((movimentos.movimentosPC>-1)&&(movimentos.movimentosPC<M)))
					{
						if(v[movimentos.movimentosPL][movimentos.movimentosPC]=='*'){
							v[movimentos.movimentosPL][movimentos.movimentosPC]='.';
							cont++;
						}
						if(movimentos.movimentosPC==movimentos.movimentosC){
							if(movimentos.movimentosPL>movimentos.movimentosL){
								movimentos.movimentosL=movimentos.movimentosPL;
								movimentos.movimentosPL++;
							}
							else {
								movimentos.movimentosL=movimentos.movimentosPL;
								movimentos.movimentosPL--;
							}
						}
						else {
							if(movimentos.movimentosPC>movimentos.movimentosC){
								movimentos.movimentosC=movimentos.movimentosPC;
								movimentos.movimentosPC++;
							}
							else {
								movimentos.movimentosC=movimentos.movimentosPC;
								movimentos.movimentosPC--;
							}
						}
					}
				break;		
				case 'E':
					if(movimentos.movimentosPL==movimentos.movimentosL){
						if(movimentos.movimentosPC>movimentos.movimentosC){
							movimentos.movimentosPC=movimentos.movimentosC;
							movimentos.movimentosPL=movimentos.movimentosL-1;
						}
						else{
							movimentos.movimentosPC=movimentos.movimentosC;
							movimentos.movimentosPL=movimentos.movimentosL+1;
						}
					}
                    else{
                    	if(movimentos.movimentosPL>movimentos.movimentosL){
							movimentos.movimentosPL=movimentos.movimentosL;
							movimentos.movimentosPC=movimentos.movimentosC+1;
						}
						else{
							movimentos.movimentosPL=movimentos.movimentosL;
							movimentos.movimentosPC=movimentos.movimentosC-1;
						}	
					}
				break;
				case 'D':
					if(movimentos.movimentosPC==movimentos.movimentosC){
						if(movimentos.movimentosPL>movimentos.movimentosL){
							movimentos.movimentosPL=movimentos.movimentosL;
							movimentos.movimentosPC=movimentos.movimentosC-1;
						}
						else{
							movimentos.movimentosPL=movimentos.movimentosL;
							movimentos.movimentosPC=movimentos.movimentosC+1;
						}
					}
					else{
						if(movimentos.movimentosPC>movimentos.movimentosC){
							movimentos.movimentosPC=movimentos.movimentosC;
							movimentos.movimentosPL=movimentos.movimentosL+1;
						}
						else{
							movimentos.movimentosPC=movimentos.movimentosC;
							movimentos.movimentosPL=movimentos.movimentosL-1;
						}
					}
				break;
			}
		}
		cout<<cont<<endl;
		cin>>N>>M>>S;
		cont=0;
	}
	
	return 0;
}
