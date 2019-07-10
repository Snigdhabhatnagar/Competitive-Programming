#include <iostream>
#include<math.h>
using namespace std ;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
		int N;
		cin>>N;
	    int a,b;
	    cin>>a>>b;
	    int count1=0,count2=0;
	    while(a!=0) {
	    	int rem=a%2;
	    	if(rem==1) {
	    		count1++;
			}
	    	a/=2;
	    	
		}
		while(b!=0) {
	    	int rem=b%2;
	    	if(rem==1) {
	    		count2++;
			}
	    	b/=2;
	    	
		}
	
		int sum=count1+count2;
		int start=N-1;
		int num=0;
		if(sum<=N) {
			while(sum!=0) {
				num+=pow(2,start);
				start--;
				sum--;
			}
		}
		else {
			int newsum=2*N-(count1+count2);
			while(newsum!=0) {
				num+=pow(2,start);
				start--;
				newsum--;
			}
		}
		cout<<num<<endl;
	    
	
	}}
