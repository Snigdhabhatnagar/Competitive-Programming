#include<iostream>
using namespace std;
int main () {
	int t;
	cin>>t;
	while(t--) {
		long int n;
		int i,flag=0,j;
		cin>>n;
		long int a[n+1];
		for(i=1 ; i<= n ;i++) {
			cin>>a[i];
		}
		for(i=1 ; i<= n ;i++) {
			for(j=i+1 ; j<= n ;j++) {
			if(a[i]!=a[j]&&a[a[i]]==a[a[j]]) {
				flag=1;
				break;
			}
			else{
				flag=0;
			}
		}
		if(flag==1) {
			break;
		}
		else{
			continue;
		}
		}
		if(flag==1) {
			cout<<"Truly Happy"<<endl;
		}
		else {
			cout<<"Poor Chef"<<endl;
		}
	}
}
