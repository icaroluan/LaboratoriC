#include<iostream>

using namespace std;

int main(){
int N, M, i , j;
    cin >> N;
    int F[N];
    for (i=0;i<N;i++){
    	cin>>F[i];
	}
    cin>>M;
    int S[M];
    for (i=0;i<M;i++){
    	cin>>S[i]; 
	    for(j=0;j<N;j++){
	        if(S[i]==F[j]){
		       F[j]=0;
		       j=N;
			}
        }
    }
	for(i=0;i<N;i++){
	    if(F[i]!=0){
	    	cout << F[i]<<" ";
		}
	}
	cout<<"\n";
return 0;	
}
