#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int N, X, Y, i, j, Teste, priMelhor,ultMelhor,pos1,pos2, soma, soma2;
	cin >> N;
	Teste=1;
	while(N!=0){
		soma=0;
		soma2=-1;
		pos1=1;
		for(i=1;i<=N;i++){
			cin >> X >> Y;
			soma+=X-Y;
			if(soma<0){
				pos1=i+1;
				soma=0;
			}
			if(soma>0 && (soma>soma2 || (soma==soma2 && i-pos1 >=ultMelhor-priMelhor))){
				soma2=soma;
				priMelhor=pos1;
				ultMelhor=i;
			}
		}
		if(soma2==-1){
			cout <<"Teste "<<Teste++<<endl<<"nenhum";
		}
		else if ((priMelhor && ultMelhor)>0){
			cout <<"Teste "<<Teste++<<endl<<priMelhor<<" "<<ultMelhor;
		}
	cin >> N;
	cout<<endl<<endl;
    }
	return 0;
} 
