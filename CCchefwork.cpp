#include<iostream>
using namespace std;
int main() {
	int N;
	cin>>N;
	int c[N],T[N],i,mina=100000,mint=100000,at=100000;
	for(int i=0 ; i<N ; i++) {
		cin>>c[i];
	}
	for(i=0 ; i<N ; i++) {
		cin>>T[i];
	}

    for(i=0 ; i<N; i++)
    {
	if(T[i]==1) {
		if(c[i]<mint) {
			mint=c[i];
		}
	}

	if(T[i]==2) {
		if(c[i]<mina) {
			mina=c[i];
		}
	}

	if(T[i]==3) {
		if(c[i]<at) {
			at=c[i];
		}	
	}
}
    int minsum=mina+mint;
    if(minsum>at) {
    	cout<<at;
	}
	else{
		cout<<minsum;
	}
    
    
}
