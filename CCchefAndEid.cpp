#include<iostream>
using namespace std;
#include<cmath>
int main() {
	int T,sum=0;
	cin>>T;
	while(T>0) {
		int i ,max=0,j;
		int v[100], N,m[100];
		cin>>N;
		for(i=0 ; i<T;i++){
		m[T]=N;
	}
	for(i=0 ; i<T;i++){
		sum=sum+m[T];
	}
		for(i=0 ; i<N ; i++) {
			cin>>v[i];
		}
		for(i=0 ; i<N ; i++) {
			if(v[i]>max) {
				max=v[i];
			}
		}
		
		int min=max;
		for(i=0 ; i<N ; i++) {
		for(j=i+1 ; j<N ; j++) 
		{
				if(abs(v[i]-v[j])<=min) {
					min=abs(v[i]-v[j]);
				
			}
		}
			}
			if(sum<2000) {
			cout<<min<<endl;
		}
		T--;
		}
		

	}
	

