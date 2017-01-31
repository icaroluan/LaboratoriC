# include <iostream>
# include <stack>
# include <cstring>

using namespace std;



int main(){
	ios_base::sync_with_stdio(false);
	int N;
	char frase[100010];
	char x;
	stack<char>pilha;
	cin>>N;
	bool b=true;
		for(int i=0;i<N;i++){
			cin.getline(frase,100010);
			for(char *j=frase;*j!='\0';j++){
				if(pilha.empty() || pilha.top()!=*j){
					if((*j=='/') || (*j=='*') || (*j=='_')){
						pilha.push(*j);
						x=*j;
					}
				}else{
					if(pilha.top()==*j || x==*j){
						pilha.pop();
					}
				}
			}
		}
		if(!pilha.empty()){
			b=false;
		}
		if(b==true){
			cout<<"C"<<endl;
			//cout<<"C-->Tamanho "<<pilha.size()<<" top-> "<<pilha.top()<<endl;
		}
		if(b==false){
			cout<<"E"<<endl;
		}
	return 0;
}



4
Que belo texto sem configuracao.
Aqui nada mais sei do que sei,
O preco do limao esta mais caro
que no japao.

4
O poeta eh um *fingidor*.
Finge tao /_completamente/_
Que chega a fingir que eh dor
A dor que _deveras_ sente.

4
Um dia ele *passarah
passarah tao bem que nada mais
esperarah*
Sera que um dia eu /passarei/?

