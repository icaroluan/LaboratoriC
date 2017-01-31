#include <iostream>
#include <cstring>
#include<stack>

using namespace std;

char LdD( char y){
	if(y=='('){
		return y=')';
	}
	else if(y=='{'){
		return y='}';
	}
	else if(y=='['){
		return y=']';
	}
	else{
		return '\0';
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	char* p=new char[100001];
	int n;
	
	cin>>n;
	for(int i=0;i<n;i++){
		stack<char>pilha;
		cin>>p;
		bool t=true;
		for(char *j=p;*j!='\0';j++){
			if((*j=='(') || (*j=='{') || (*j=='[')){
				pilha.push(*j);
			}
			else{
				if((pilha.empty()) || (LdD(pilha.top())!=*j)){
					t=false;
				}
				else{
					pilha.pop();
				}
			}
		}
		if(!pilha.empty()){
			t=false;
		}
		if(t==true){
			cout<<"S"<<endl;
		}
		if(t==false){
			cout<<"N"<<endl;
		}
	}
	return 0;
}
