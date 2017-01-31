#include <iostream>
#include <cmath>

using namespace std;

long long int karatsuba(long long int xu, long long int yv, int zn){
	if (zn <= 3){
		return (xu * yv);
	}
	else{
		int m = zn/2;
		int b = pow(10, m);
		//int c = pow (10, 2 * m);
		long long int p = xu/b;
		long long int q = xu%b;
		long long int r = yv/b;
		long long int s = yv%b;
		long long int pr = karatsuba(p, r, m);
		long long int qs = karatsuba(q, s, m);
		long long int y = karatsuba(p+q, r+s, m+1);
		long long int x = pr * pow (10, 2 * m) + (y - pr - qs) * b + qs;
		return x;
	}
	
}

int main(void) {
	int xu, yv;
	int zn;
	cin>>xu>>yv>>zn;
	cout<<karatsuba(xu, yv, zn)<<endl;
	return 0;
}
