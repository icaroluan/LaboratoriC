#include <iostream>
using namespace std;

int main(){
	long long int L, N, C, F;
	cin >> L >> N;
	C=((L-(N-1)) * (L-(N-1)) );
	F=(C+(N-1));
	cout <<F<<endl;
	return 0;
}
