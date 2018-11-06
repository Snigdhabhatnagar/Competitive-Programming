#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	int n[t],x[t],y[t],i;
	for(i=0 ; i<t ;i++){	
		cin>>n[i];
	}
	for(i=0 ; i<t ;i++){

		y[i]=1;
		
		for(int j=0; j<n[i] ;j++){
		y[i]=(y[i]*2);
	}
	if(n[i]%2!=0){
	x[i]=(y[i]+1)/3;
}
	else {
	x[i]=(y[i]-1)/3;		
	}


}
	
	for(i=0 ; i<t ;i++){	
		cout<<x[i]<<" "<<y[i]<<" ";
	}	
}
	
	
