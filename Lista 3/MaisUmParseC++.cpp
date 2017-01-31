# include <iostream>
# include <stack>
# include <cstring>

using namespace std;



int main(){
	ios_base::sync_with_stdio(false);
	int N;
	char* frase=new char[100010];
	char x;
	stack<char>pilha;
	cin>>N;
	bool b=true;
		for(int i=0;i<N;i++){
			cin.getline(frase,100010);
			for(char *j=frase;*j!='\0';j++){
				if(pilha.empty() || pilha.top()!=*j){
					if((*j=='/') || (*j=='*') || (*j=='_')){
						pilha.push(*j);
						x=pilha.top();
					}
					if(x==*j){
						break;
					}
				}else{
					if(pilha.top()==*j){
						pilha.pop();
					}
				}
			}
		}
		if(!pilha.empty()){
			b=false;
		}
		if(b==true){
			cout<<"C"<<endl;
		}
		if(b==false){
			cout<<"E"<<endl;
		}
	return 0;
}

