#include <iostream>
#include <cstdlib>
#include <vector>
#include <limits.h>

using namespace std;

int main(int argc, char *argv[]){
	ios_base::sync_with_stdio(false);
    int i, j, n, m, aux, temp, voltas[101], min;
    cin>>n>>m; 
    //scanf("%d %d", &n, &m);
    for(i = 0, temp = 0; i < n; i++, temp = 0){
        for(j = 0; j < m; j++){
            cin>>aux;
            //scanf("%d", &aux);
            temp += aux;
        }
            voltas[i] = temp;
    }
     
    for (i = 0; i < 3; i++){
         min = i;
        for(j = 0; j < n; j++){
            if((voltas[j] < voltas[min])){
                min = j;
                }
            }
     
            voltas[min] = INT_MAX;
            cout<<min+1<<endl;
            //printf("%d\n", min+1);
        }
     
return EXIT_SUCCESS;
    }
