# include <iostream>
# include <vector>;

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int A, V, Teste=1,cont, i, j, X, Y;
	vector<int>v;
	cin >>A>>V;
	if(V==0){
		cout<<0;
	}
	while((A && V)!=0){
		for(i=0;i<A;i++){
			v.push_back(0);
		}
		for(i=0;i<V;i++){
			cin>>X>>Y;
			v[X-1]++;
			v[Y-1]++;
		}
		cont=1;
		for(j=0;j<A;j++){
			if(v[j]>cont){
				cont=v[j];
			}
		}
		cout<<"Teste "<<Teste++<<endl;
		for(j=0;j<A;j++){
			if(v[j]==cont){
				cout<<j+1<<" ";
			}
		}
		cout<<endl;
		cout<<endl;
		cin>>A>>V;
		v.clear();
	}
	return 0;
}
