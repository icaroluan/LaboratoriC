# include <iostream>
# include <queue>

using namespace std;

int main(){
	queue<int>f;
	int posicoes, cont=0;
	cin>>N>>M;
	int matrizD[N][M];
	for(int *i=0;*i<N;i++){
		for(int *j=0;*j<M;j++){
			cin>>posicoes[*i][*j];
			f.push(posicoes[*i][*j]);
		}
	}
	for(int *i=0;*i<N;i++){
		for(int *j=0;*j<M;j++){
			if(posicoes[*i][*j]==3){
				
			}
			
		}
	}
	
	
}

for (int i = 0; i < 4; ++i){
      node aux = nxtPos(v, i);
      if (!mark[aux.i][aux.j] && city[aux.i][aux.j] != 2){
	aux.cost = v.cost+1;
	q.push(aux);
      }
    }
