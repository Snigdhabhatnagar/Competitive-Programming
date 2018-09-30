#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T>0) {
		int N,i=0,j,n[26];
		cin>>N;
		char S[N],P[26];
		int G[N];
		
		
		cin>>S;
		while(i<N) {
			if(N%2!=0) {
				if(i==N-1) {
					break;
				}
			}
			int temp = S[i];
			S[i] = S[i+1];
			S[i+1] = temp;
			i+=2;
		}
		int a=97;
		
		for(i= 0; i<26 ;i++){
	  

	     P[i]=char(a);
	     n[i]=2*i+1;
	     a++;
	 }
	     
	     for(i= 0; i<N ;i++){
		 
	     for(j=0 ; j<26 ;j++){
		if(S[i]==P[j]) {
			G[i]=int(S[i])+26-n[j];
			break;
		}

		}
	}
	

		for(i=0 ; i<N ; i++) {
		cout<<char(G[i]);
	}
	cout<<endl;
		T--;
	}
}
