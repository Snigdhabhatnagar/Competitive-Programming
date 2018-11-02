#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k,i,sum=0,squareSum=0;
		cin>>n>>k;
		int a[n];
		for(i=0 ; i< n;i++) {
			cin>>a[i];
		}
		sort(a,a+n);
		
		for(int j=n ; j>n-k-1 ; j--) {
			a[j]=1;
			
		}
		for(i=0 ; i<n ;i++) {
			
			squareSum=squareSum+(a[i]*a[i]);
			sum=sum+a[i];
		}
		if(squareSum<=sum) {
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
	}
}
