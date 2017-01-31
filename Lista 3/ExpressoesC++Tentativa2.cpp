# include <iostream>
# include <stack>
# include <cstring>

using namespace std;

bool parseLadoE(char ladoE){
	return ladoE=='(' || ladoE=='[' || ladoE=='{';
}

char parseLadoD(char ladoD){
	if(ladoD=='('){
  		return ladoD=')' ;
  	}
  	else if(ladoD=='['){
  		return  ladoD=']';
  	}
  	else if(ladoD=='{'){
  		return ladoD='}';
  	}
  	else{
  	return '\0';
  }
}

int main(){
	ios_base::sync_with_stdio(false);
	int T;
	char* palavra=new char[100100];
	cin>>T;
		for(int i=0;i<T;i++){
			cin>>palavra;
			stack<char>p1;
				int	a=1;
			for(char *j=palavra;a && *j!='\0';j++){
				if(parseLadoE(*j)){
					p1.push(*j);
				}
				else{
					if((p1.empty()) || parseLadoD(p1.top())!=*j){
						a=0;
					}
					else{
						p1.pop();
					}
				}
			}
		if(!p1.empty()){
			a=0;
		}
		if(a==1){
			cout<<"S"<<endl;
		}
		if(a==0){
			cout<<"N "<<endl;
		}
		
	}
	return 0;
}
