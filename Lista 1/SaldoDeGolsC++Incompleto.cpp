#include <iostream>

using namespace std;

int main(){
	int N, X, Y, i, j, Teste, priMelhor,ultMelhor,pos1,pos2, soma;
	cin >> N;
	Teste=1;
	while(N!=0){
		priMelhor=0;
		ultMelhor=0;
		pos1=0;
		pos2=0;
		soma=0;
		int soma2=0;
		for(i=0;i<N;i++){
			cin >> X >> Y;
			soma+=X-Y;
			if(soma>priMelhor){
				priMelhor=soma;
				pos1=i+1;
				soma=0;
			}
			else if(soma<=priMelhor){
				soma=0;
			}
			for(j=pos1;j<=N;j++){
				soma2+=X-Y;
				if(soma2>ultMelhor){
					ultMelhor=soma2;
					pos2=j;
					soma2=0;
				}
				if(soma2==ultMelhor){
					pos2=j-1;
				}
				if(soma2<=ultMelhor){
					soma2=0;
				}
				else if(pos2==N){
					pos2=pos1;
				}
			}
		}
		if((priMelhor)<=0){
			cout <<"Teste "<<Teste<<"\nnenhum";
		}
		else if((priMelhor && ultMelhor)>=0){
			cout <<"Teste "<<Teste<<"\n"<<pos1<<" "<<pos2;
		}
	cin >> N;
	cout<<"\n\n";
	Teste++;
    }
	return 0;
} 


#include <iostream>

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
