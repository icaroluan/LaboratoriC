#include <iostream>
using namespace std;

int main(){
	int a, adc, adcn;
	cin >> a;
	adc = (a-1986) % 76;
	adcn= a+(76-adc);
	cout<<adcn<<"\n";
	return 0;}
	
