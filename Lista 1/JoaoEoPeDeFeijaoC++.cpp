#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long long N, quadrado, P1=0, P2=0, acumulador;

	cin >> N;

	while(N != 0){
		quadrado = N * N;
		acumulador = 10;

		if(N != 1){
			while((P1 = (quadrado / acumulador)) > 0){
				P2 = quadrado % acumulador;
				acumulador *= 10;

				if(P2 == 0){
					continue;
				}

				if(P1 + P2 == N){
					cout << N <<": S\n";
					break;
				}
			}
			if(P1 == 0){
				cout << N <<": N\n";
			}
		}
		else{
			cout << N <<": S\n";
		}

		cin >> N;
	}
	return 0;
}
