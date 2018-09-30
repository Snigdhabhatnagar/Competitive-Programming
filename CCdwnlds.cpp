#include<iostream>
using namespace std;
int main() {
	int TC;
	cin>>TC;
	while(TC>0) {
		int T[10], D[10], i , N, sum=0;
		long int K;
		cin>>N>>K;
		for(i=0 ; i<N ; i++) {
			cin>>T[i]>>D[i];
		}
		for(i=0 ; i<N ; i++) {
			sum=sum+T[i]*D[i];		
		}
		for(i=0 ; i<N ; i++) {
			if(K>0){
				if(K>=T[i]){

				sum = sum- T[i]*D[i];
				K=K-T[i];
			    }
			    else if(K<T[i]) {
				K=T[i]-K;
				sum=sum-K*D[i];
			    }
			}		
		}
		cout<<sum<<endl;
	TC--;
	}
}