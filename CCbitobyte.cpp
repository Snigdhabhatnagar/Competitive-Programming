#include<iostream>
using namespace std;
int main() {
	long int T;
	cin>>T;
	while(T--) {
		long int N,bit=1,bibble=1,byte=1,rem,n,i;
		cin>>N;
		N-=1;
		n=N/26;
		for(i=0 ; i<n ;i++) {
			bit=bit*2;
			bibble=bibble*2;
			byte=byte*2;
		}
		rem=N%26;
			if(rem<2) {
				cout<<bit<<" "<<0<<" "<<0<<endl;
			}
			else if(rem>=2&&rem<10) {
				cout<<0<<" "<<bibble<<" "<<0<<endl;
			}
			else if(rem>=10&&rem<26) {
				cout<<0<<" "<<0<<" "<<byte<<endl;
			}
	}
}
