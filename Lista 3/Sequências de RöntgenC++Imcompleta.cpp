#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int n,quantidade,x;
	string s,frase, aux2;
	char aux;
	cin>>n;
	for(int i=0;i<n;i++){
		queue<string>fila;
		cin>>frase>>quantidade;
		fila.push(frase);
		s=frase;
		for(int j=0;j<quantidade;j++,x=0){
			aux2="";
			while(x<s.size()){
				int cont=0;
				aux=s[x];
				while(x<s.size() && s[x]==aux){
					cont++;
					x++;
				}
				aux2+=(cont+'0');
				aux2+=aux;
			}
			s=aux2;
			fila.push(aux2);
			while(!fila.empty()){
				cout<<fila.front()<<endl;
				fila.pop();
			}
			
		}
	}

	return 0;
}
