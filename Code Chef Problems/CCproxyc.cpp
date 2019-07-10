#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T--) {
		int n;
		cin>>n;
		char *arr = new char[n];
		
		float countA=0,countP=0;
		for(int i=0 ; i<n ; i++) {
			cin>>arr[i];
			if(arr[i]=='P') {
				countP++;
			}
			else if(arr[i]=='A'){
				countA++;
			}
		}
	
		int count=0;
		if(((float)countP/n)>=0.75) {

			cout<<count<<endl;
			continue;
		}
		for(int i=2; i<n-2;i++) {
			if((arr[i-2]=='P'||arr[i-1]=='P')&&arr[i]=='A'&&(arr[i+1]=='P'||arr[i+2]=='P')) {
			
				countP++;
				count++;		
			}
			if(((float)countP/n)>=0.75) {

			cout<<count<<endl;
			break;
		}
			
		}
			if(((float)countP/n)<0.75) {

			cout<<-1<<endl;
		
		}
		}
	}

