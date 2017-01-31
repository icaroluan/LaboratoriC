#include <iostream>
#include <vector>

using namespace std;

int main(){

	int q, r, a, b, c, O, G, d, K, M, N, p, l, h, cont=0, contM=0, logotipo=1; 
	int lo[20][20], mat[350][260];
	cin >> O>>G;
	while(O!=0 && G!=0){
	
	for(q=0;q<O;q++){			
		
	for(r=0;r<G;r++){
	cin>>lo[q][r];
	}
	}
	cin>>K>>M>>N;
	for(p=0;p<K;p++){
	
	for(a=0;a<M;a++){
	
	for(b=0;b<N;b++){
	cin>>mat[a][b];
	}
	}
	for(a=0;a<M;a++){
	for(b=0;b<N;b++){
	if(mat[a][b]==lo[0][0]){	
	for(c=0;c<O;c++){				 
	for(d=0;d<G;d++){			
	if(mat[a+c][b+d]!=lo[c][d]){
	cont=true;
	d=G;
	}	
	}	
	if(cont==true){
	c=O;	
	}
	}
	if(cont==false){
	contM++;
	}
	cont=false;	
	}
	}
	}	
	}
cout <<"Logotipo "<<logotipo++<<endl;
cout<<contM<<endl<<endl;
contM=0;
cin>>O>>G;
	}return 0;}
