#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#define MAX_NUM_PAISES 100

using namespace std;



typedef struct{
	int id;
	int ouro;
	int prata;
	int bronze;
	int total;
} Medalhas;


Medalhas pais[MAX_NUM_PAISES + 1];

int main(){
	ios_base::sync_with_stdio(false);
	int i, j, N, M, O, P, B;
	Medalhas aux;
	cin>>N>>M;
	
	
	for(i = 1; i <= N; i++){
		pais[i].id = i;
		pais[i].ouro = 0;
		pais[i].prata = 0;
		pais[i].bronze = 0;
		pais[i].total=0;
	}

	for(i = 1; i <= M; i++){
		cin>>O>>P>>B;
		
		pais[O].ouro++;
		pais[P].prata++;
		pais[B].bronze++;
		pais[O].total++;
		pais[P].total++;
		pais[B].total++;
	}


	
	for(i = 2; i <= N; i++){
		for(j = i - 1, aux = pais[i];
			(j >= 1) && 
			(aux.total> pais[j].total) ||
			((aux.ouro>pais[j].ouro) &&
			((aux.total==pais[j].total) &&
			(aux.ouro==pais[j].ouro)) || 
			(aux.total==pais[j].total)) &&
			((aux.prata  > pais[j].prata) &&
			(aux.total==pais[j].total) &&
			(aux.ouro==pais[j].ouro && aux.total==pais[j].total) &&
			(aux.prata==pais[j].prata && aux.total==pais[j].total)) ||
			((aux.bronze > pais[j].bronze) 	  &&
				(aux.bronze==pais[j].bronze && aux.total==pais[j].total) &&
				(aux.ouro  == pais[j].ouro && aux.total==pais[j].total)   &&	
				(aux.prata == pais[j].prata && aux.total==pais[j].total)) 	|| 	
			((aux.id 	 < pais[j].id) 		  &&
				((aux.ouro   == pais[j].ouro)  && (aux.total == pais[j].total))	&&
				((aux.prata  == pais[j].prata) && (aux.total == pais[j].total))	&&
				((aux.bronze == pais[j].bronze) && (aux.total == pais[j].total))); j--){ 
		
			pais[j + 1] = pais[j];
		}
		pais[j + 1] = aux;
	}

	cout<<pais[1].id;
	
	for(i = 2; i <= N; i++){
		cout<<" "<<pais[i].id;
		
	}
	cout<<endl;
	

	return 0;
}
