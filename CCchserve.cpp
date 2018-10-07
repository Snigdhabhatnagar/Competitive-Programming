#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T--) {
		long int P1,P2,K,n;
		cin>>P1>>P2>>K;
		n=(P1+P2)/K;
		if(n%2==0) {
			cout<<"CHEF"<<endl;
		}
		else {
			cout<<"COOK"<<endl;
		}
	}
}

