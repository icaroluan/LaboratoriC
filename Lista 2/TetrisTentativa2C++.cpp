#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#define MAX_NUM_PARTIDAS 12
#define MAX_STRING_SIZE  20

using namespace std;



typedef struct{
    int  soma;
    int  nivel;
    char jogador[MAX_STRING_SIZE];
}Partidas;

int main(){
	ios_base::sync_with_stdio(false);
    int n, i, j, x, teste, partida, maior, menor;
    Partidas tetris[1000], aux_tetris;

    for(teste = 1; ;teste++, cout<<endl){
        cin>>n;
        

        if(n == 0)
            break;

        for (i = 0; i < n; i++){
        	cin>>tetris[i].jogador;
            

            for(j = 0, maior = 0, menor = 1001, tetris[i].soma = 0; j < MAX_NUM_PARTIDAS; j++){
                cin>>partida;
                
                tetris[i].soma += partida;
                if(partida < menor)
                    menor = partida;
                if(partida > maior)
                    maior = partida;
            }
            
            tetris[i].soma -= (menor + maior);
        }

        for (i = 1; i < n; i++){
            for (j = i-1, aux_tetris = tetris[i]; (j >= 0) && (aux_tetris.soma > tetris[j].soma) ; j--)
                tetris[j+1] = tetris[j];
            for(;(j >= 0) && (strcmp(aux_tetris.jogador, tetris[j].jogador) < 0) && (aux_tetris.soma == tetris[j].soma);j--)
                tetris[j+1] = tetris[j];
                
            tetris[j+1] = aux_tetris;
        }
		
        
        cout<<"Teste "<<teste<<endl;
        for (i = 0, x = 1; i < n; i = j+1, x = j+2){
            for(j = i;(j+1 != n) && (tetris[j+1].soma == tetris[j].soma);j++)
                cout<<(x)<<" "<<tetris[j].soma<<" "<<tetris[j].jogador<<endl;
                
            cout<<(x)<<" "<<tetris[j].soma<<" "<<tetris[j].jogador<<endl;;
            
        }
    }

    return EXIT_SUCCESS;
    }
