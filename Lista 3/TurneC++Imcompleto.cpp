#include <iostream>
#include <queue>
#include <cctype>
#include <cstring>

using namespace std;

int main(){
	
	string cidades;
	queue<string>fila;
	queue<string>fila2;
	char aux, aux2;
	
	
	while(cin>>cidades){
		aux=cidades[0];
		aux2=cidades[cidades.size()-1];
		if(aux==toupper(aux2)){
			fila2.push(cidades);
		}else{
			fila.push(cidades);
		}
		
	} 
	while(!fila2.empty()){
		fila.push(fila2.front());
			fila2.pop();
	}
	while(!fila.empty()){
		cout<<fila.front()<<endl;
		fila.pop();
	}
	return 0;
} 
//teste1
Oiapoque
Estrela
Abaetetuba
//teste 2
Brasilia
Americana
IlhaSolteira
SaoPaulo
OuroPreto
//teste3
Rondonopolis
Mirandopolis
Salete
Itaituba
Imperatriz
Zacarias
Manaus
SaoJoao
Ocara
Aracatuba





#include <iostream>
#include <queue>
#include <cctype>
#include <cstring>

using namespace std;

int main(){
	
	string cidades;
	string AuxCidades;
	string AuxCidades2;
	queue<string>fila;
	queue<string>fila2;
	queue<string>fila3;
	char aux, aux2;
	
	
while(cin>>cidades){
	fila.push(cidades);
}
int cont=-1;
cont=cont+fila.size();
fila2.push(fila.front());
while(cont>0){
	AuxCidades=fila.front();
	fila.pop();
	cout<<"-->"<<AuxCidades<<endl;
	aux=AuxCidades[AuxCidades.size()-1];
	AuxCidades2=fila.front();
	cout<<"-->"<<AuxCidades2<<endl;
	cout<<"-->"<<aux<<endl;
	aux2=AuxCidades2[0];
	cout<<"-->"<<aux2<<endl<<endl;
		if(aux2==toupper(aux)){
			fila3.push(AuxCidades2);
			if(aux2!=toupper(aux)){
				fila.push(fila.front());
				fila.pop();
			}
			
			
		}
		else{
			fila.push(AuxCidades2);
		}
		if(fila.size()==1){
			break;
		}
		cont--;
	
}
fila.pop();
while(!fila.empty()){
	fila2.push(fila.front());
	fila.pop();
}

while(!fila3.empty()){
	fila2.push(fila3.front());
	fila3.pop();

}

while(!fila2.empty()){
	cout<<fila2.front()<<endl;
	fila2.pop();
}


	return 0;

} 


