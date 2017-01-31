#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int S,i,j,x,y,Teste=1;
	vector<int>v1;
	vector<int>v2;
	cin>>S;
	while(S!=0){
		int NS=0;
		int LO=0;
		for(i=0;i<S;i++){
			cin>>x>>y;
			v1.push_back(x);
			v2.push_back(y);
		}
		stable_sort(v1.begin(),v1.end());
		stable_sort(v2.begin(),v2.end());
		if(S%2==1){
			NS=v1[S/2];
			LO=v2[S/2];
		}
		else{
			NS=(v1[S/2]+v1[S/2-1])/2;
			LO=(v2[S/2]+v2[S/2-1])/2;
		}
		cout<<"Teste "<<Teste++<<endl;
		cout<<NS<<" "<<LO<<endl<<endl;
		cin>>S;	
		v1.clear();
		v2.clear();
	}


return 0;
}
