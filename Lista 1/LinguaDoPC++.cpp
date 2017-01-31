#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char v[10001];
	int x ,i,j;
	cin.getline(v,10001);
	for(j=0;j<strlen(v);j++){
		if(v[j]=='p'){
			v[j]='0';
			j++;
	    }
	}
	for(i=0;i<strlen(v);i++){
	   if(v[i]!='0'){
	    	cout<<v[i];
		}
	}
 
 
return 0;	
}
