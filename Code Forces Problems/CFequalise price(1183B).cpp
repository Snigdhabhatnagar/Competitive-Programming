#include <iostream>
#include<math.h>
#include<algorithm>
using namespace std ;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		int *a=new int[n];
		for(int i=0 ; i<n ; i++) {
			cin>>a[i];
		}
		sort(a,a+n);
		if(a[n-1]-a[0]>2*k) {
			cout<<"-1"<<endl;
		}
		else {
			cout<<a[0]+k<<endl;
		}
	}}
