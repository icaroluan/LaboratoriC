#include <iostream>
using namespace std;

int main(){
	int Xo, Yo, X1, Y1, Xf, Yf, X2, Y2;
	cin >> Xo >> Yo >> X1 >> Y1;
	cin >> Xf >> Yf >> X2 >> Y2;
	if (Xo > X2 || Yo > Y2 || X1 < Xf || Y1 < Yf){
		cout <<"0\n";
	}
	else{
		cout <<"1\n";	
	}
	return 0;
} 
 

