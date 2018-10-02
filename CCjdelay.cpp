#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T--) {
		int N,i,count=0;
		cin>>N;
		int S[N],J[N];
		for(i=0 ; i<N ; i++) {
			cin>>S[i]>>J[i];
		}
		for(i=0 ; i<N ; i++) {
			if(J[i]-S[i]>5) {
			count++;
			}
		}
		cout<<count<<endl;
		
		
	}
}

