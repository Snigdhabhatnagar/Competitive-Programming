#include <iostream>
using namespace std ;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    if(360%n==0) {
	        cout<<"y";
	    }
	    else {
	        cout<<"n";
	    }
	    cout<<" ";
	    
	    if(n<=360&&n>=1) {
	        cout<<"y";
	    }
	    else{
	        cout<<"n";
	    }
	    cout<<" ";
	    
	    
	    if(360>=(n*(n+1)/2)) {
	        cout<<"y";
	    }
	    else {
	        cout<<"n";
	    }
	    cout<<endl;
	    }
	return 0;
}


