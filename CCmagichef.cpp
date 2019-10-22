#include<iostream>
using namespace std;
int main() {
		int t;
	cin>>t;
	while(t>0) {
		
		long int N,X,S,i;
		cin>>N>>X>>S;
		long int A[S],B[S];
		for(i=0 ; i<S ; i++) {
			cin>>A[i]>>B[i];
		}
		for(i=0 ; i<S ; i++) {
			if(A[i]==X) {
				X=B[i];
			}
			else if(B[i]==X) {
				X=A[i];
			}
		}
		cout<<X<<endl;
		t--;
	}
}
