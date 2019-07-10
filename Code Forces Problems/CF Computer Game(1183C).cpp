#include <iostream>
#include<math.h>
#include<algorithm>
using namespace std ;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
		unsigned long long k,n,a,b;
		cin>>k>>n>>a>>b;
		unsigned long long diva;
		if((k%a==0)) {
			diva=k/a-1;
		}
		else{
			diva=k/a;
		}
		unsigned long long divb;
		if(k%b==0) {
			divb=k/b-1;
			
		}
		else{
			divb=k/b;
		}
		if(k<=a&&k<=b) {
			cout<<-1<<endl;
		}
	
		else{
			if(diva>=n) {
				diva=n;
			}
		while(diva>=0) {
			if(((a*diva)+(b*(abs(n-diva))))<k) {
				cout<<diva<<endl;
				break;
			}
			else {
				diva--;
			}
		}
		if(diva==-1) {
			cout<<-1<<endl;
		}
	}
		
	}
}
