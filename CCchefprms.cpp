#include<iostream>
using namespace std;

int checkPrime(int k) {
		for(int i=2 ; i<=k/2 ;i++) {
		if(k%i==0) {
		return 0;
			}
		}
	return 1;
}

int prime (int n) {
	for(int i=2 ; i<=n/2 ;i++) {
		if(n%i==0) {
			if(checkPrime(i)&&checkPrime(n/i)&&(i!=(n/i))) {
				return 1;
			}
		}
	}
	return 0;
}

int main() {
	int T;
	cin>>T;
	while(T--) {
		int N,a,b;
		int FLAG=0;
		cin>>N;

		for(int i=4 ; i <=(N/2) ;i++) {	
			a=prime(i);
			b=prime(N-i);
		    if(a==1&&b==1) {
				FLAG=1;
				break;
			}
			else{
				FLAG=0;
			}	
		}
		if(FLAG==1) {
			cout<<"YES"<<endl;
		}
		else {
			cout<<"NO"<<endl;
		}
	}
}
