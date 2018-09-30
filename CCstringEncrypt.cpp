#include<iostream>
using namespace std;

int main() {
	int T,N,i;
	char S[20];
	cin>>T;
	while(T>0) {
		cin>>N;
		for(i=0 ; i<N ; i++){
		cin>>S[i];
	}
	if(N%2==0) {
		for(i=0 ; i<N ;i=i+2){
		char temp=S[i];
		S[i]=S[i+1];
		S[i+1]=temp;
	}
	}
	else{
		for(i=0 ; i<N-1 ; i=i+2){
		char temp=S[i];
		S[i]=S[i+1];
		S[i+1]=temp;
	}		
	}
		for(i=0 ; i<N ; i++){
	cout<<S[i];
}

		T--;
	}
}
