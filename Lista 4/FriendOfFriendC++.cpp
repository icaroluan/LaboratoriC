#include <iostream>
#include <set>

using namespace std;

int main(){
	set<int>c;
	int n,idf,nf,ff;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>idf>>nf;
		c.insert(idf);
		for(int h=0;h<nf;h++){
			cin>>ff;
			c.insert(ff);
		}
	}
	int vnff=c.size()-n;
	cout<<vnff<<endl;
	
	return 0;
}
