#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T--) {
		int N,i;
		long int K;
		cin>>N>>K;
		long int A[N];
		for(i=0 ; i<N ; i++){
			cin>>A[i];
		}
		for(i=0 ; i<N ; i++){
			if(A[i]<=K) {
				K=K-A[i];
				cout<<"1";
			}
			else {
				cout<<"0";
			}
		}
		cout<<endl;
		
	}
}

