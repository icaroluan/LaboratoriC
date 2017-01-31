#include <iostream>
#include <vector>
 
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int Teste=1,P,R,NP,O,Comando,pos,i,j,h,numeroP;
	vector<int>v;
	cin >> P>>R;
	while((P && R)!=0){
		for(i=0;i<P;i++){
			cin>>numeroP;
			v.push_back(numeroP);
		}
		for(i=0;i<R;i++){
			cin>>NP>>O;
			pos=0;
			for(j=0;j<NP;j++){
				cin>>Comando;
				if(Comando==O){
					pos++;
				}
				else {
					for(h=pos+1;h<NP;h++){
						v[h-1]=v[h];
					}
				}
			}
		}
		cout<<"Teste "<<Teste++<<endl;
		cout<<v[0]<<endl<<endl;
		cin>>P>>R;
		v.clear();
	}
	
	return 0;
}



