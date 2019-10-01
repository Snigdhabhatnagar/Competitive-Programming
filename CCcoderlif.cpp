#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T>0) {
		int i,count1=0;
	    int a[30];
	    for(i=0 ; i<30 ;i++) {
		cin>>a[i];
	}
		
		for(i=0 ; i<30 ;i++) {
			if(a[i]==1&&a[i]==a[i+1]) {
				count1++;
				if(count1+1<=5&&a[i+2]==0) {
					count1=0;
				}
				else if(count1+1>5) {
				
				cout<<"#CoderLifeMatters"<<endl;
				break;
				}
				
		}
		else{
		continue;
		}
		
	}
	if(count1+1<=5) {
		cout<<"#AllCodersAreFun"<<endl;
	}
	
		

		T--;
	}
}
