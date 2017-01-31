# include <iostream>
# include <set>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int N, P ,i, j=0, numeroQ, numeroP, numerosT;
	set<int>c;
	cin>>numeroQ;
	for(i=0;i<numeroQ;i++){
		cin>>numeroP;
		c.insert(numeroP);
	}
	while(cin >> numerosT){
		if(c.find(numerosT)!=c.end()){
			cout<<"sim"<<endl;
		}
		else{
			cout<<"nao"<<endl;
		}
    }	
	return 0;
}

