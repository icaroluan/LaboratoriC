#include <iostream>
#include <vector>

using namespace std;

int main(){
	int i, j, valor, N, num, mairN;
	
	cin >> N;
	vector<int>v;
	vector<int>vEspelho;
	for(i=0;i<N;i++){
		cin >> valor;
		v.push_back(valor);
		vEspelho.push_back(0);
		
	}
	for(i=0;i<N;i++){
    	for(j=0;j<N;j++){
	       if(v[i]==v[j]){
	    	  vEspelho[i]++;
	       }
		}
    }
    for(i=0,mairN=0;i<N;i++){
    	if(vEspelho[mairN]<vEspelho[i]){
    		mairN=i;
		}
		if(vEspelho[mairN]==vEspelho[i]){
			if(v[mairN]<v[i]){
			   mairN=i;
		    }
		}
	}
	cout<<v[mairN]<<endl;
	return 0;
}
