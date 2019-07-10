#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    long long x,y,k;
	    cin>>x>>y>>k;
	    long long num=x+y;
//	    if(y==0&&x<=k) {
//	    	cout<<"Paja"<<endl;
//	    	
//		}
		long long div=num/k;
		long long rem=num%k;
		if(div%2==0) {
			if(rem>=0) cout<<"Chef"<<endl;
			
		}
	    else if(div%2!=0) {
	    	if(rem>=0) cout<<"Paja"<<endl;
	    
	    }
	    
	}
	return 0;
}

