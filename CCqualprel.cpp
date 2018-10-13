#include<iostream>
#include <bits/stdc++.h> 
using namespace std;


int main() {
	int T;
	cin>>T;
	while(T--) {
		int i,j,count=0;
		long int N,K;
		cin>>N>>K;
		long int A[N];
		for(i=0 ; i<N ;i++){
		cin>>A[i];
	}
	 sort(A, A+N, greater<int>()); 

for(i=0 ; i<N ;i++) {
	if(A[i]==A[K-1]||A[i]>A[K-1]) {
	count+=1;
	}
	}
cout<<count<<endl;		
}
}
