# include <iostream>
# include <set>

using namespace std;

set<int>c;

int numeros(int &nM){
	int prox=0,proxr=0,soma=0,aux=nM;
	for(set<int>::iterator it=c.begin();it !=c.end();it++){
		prox=*it;
		soma=aux-*it;
		if(c.find(soma)!=c.end()){
			proxr=soma;
			break;
		}
		
	}
	 cout<<prox<<" "<<proxr<<endl;
}



int main(){
	ios_base::sync_with_stdio(false);
	int N, *P, K, ni;
	P=?
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>*P;
		c.insert(*P);
	}
	cin>>K;
	numeros(K);
	return 0;
}
