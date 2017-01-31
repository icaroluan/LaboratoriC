#include <iostream>
#include <vector>

using namespace std;

int main(){
	int i, j,  N, num, mairN;
	
	cin >> N;
	vector<int>v(N);
	vector<int>vEspelho(N);
	for(i=0;i<N;i++){
		cin >> v[i];
		
	}
	for(i=0;i<N;i++){
    	for(j=0,vEspelho[i]=0;j<N;j++){
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


