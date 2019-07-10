#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		long long *a1=new long long[n];
		long long *a2=new long long[n];
		long long l=0,k=1;
		for(int i=0 ; i<n;i++) {
			long long x;
			cin>>x;
			if(x%2==0) {
			    a1[l]=x;
			    l++;
			}
			else{
			    a1[n-k]=x;
			    k++;
			}
			
		}
		l=0,k=1;
	for(int i=0 ; i<n;i++) {
			long long x;
			cin>>x;
			if(x%2==0) {
			    a2[l]=x;
			    l++;
			}
			else{
			    a2[n-k]=x;
			    k++;
			}
			
		}
		long long sum=0;
		for(int i=0 ; i<n;i++) {
		    sum+=(a1[i]+a2[i])/2;
		}
		cout<<sum<<endl;
	}
	return 0;
}

