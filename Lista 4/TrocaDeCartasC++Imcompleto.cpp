# include <iostream>
# include <set>

using namespace std;

int main(){
	set<int>c1;
	set<int>c2;
	int A,B,x,y,cont1=0,cont2=0;
	cin>>A>>B;
	while((A && B) !=0){
		for(int i=0;i<A;i++){
			cin>>x;
			c1.insert(x);	
		}
		for(int j=0;j<B;j++){
			cin>>y;
			c2.insert(y);
		}
			for(set<int>:: iterator it=c2.begin();it!=c2.end();it++){
					if(c1.find(*it)==c1.end()){
						cont1++;
					}
					
			}
			for(set<int>:: iterator it2=c1.begin();it2!=c1.end();it2++){
					if(c2.find(*it2)==c2.end()){
						cont2++;
					}
			}
			
		if(cont2<cont1){
			cout<<cont2<<endl;
		}else{
			cout<<cont1<<endl;
		}
		cont1=0;
		cont2=0;
		cin>>A>>B;
		c1.clear();
		c2.clear();
	}
	return 0;
	
}
