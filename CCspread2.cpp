#include<iostream>
using namespace std;

int snack (long int A [], int p , int N,int d) {
	int k=p;
		for(int i=0 ; i<k ;i++) {	
			p=p+A[i];
		}
			d=d+1;
			if(p==N||p>N) {
				return d;
				
			}
			else{
				snack(A,p,N,d);
			}
		}
	

int main() {
	int T;
	cin>>T;
	while(T--) {
		long int N;
		int d=0,p=1,i;
		cin>>N;
		long int A[N];
		for(i=0 ; i<N ;i++){
		cin>>A[i];
	}   
	cout<<snack(A,p,N,d)<<endl;


			
		}
	}
		
	

