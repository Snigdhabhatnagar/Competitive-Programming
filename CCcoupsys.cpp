#include<iostream>
using namespace std;
int main() {
		int T;
	cin>>T;
	while(T>0) {
		int n,i;
		cin>>n;
		int c[n],d[n],l[n],min1=0,min2=0,min3=0,city1,city2,city3,j1,j2,j3;
		for(i=0 ; i<n ;i++)  {
			cin>>c[i]>>l[i]>>d[i];
		}
		for(i=0 ; i<n ;i++) {
			if( l[i]==1 ) {
				if( d[i]>min1 ) {
					min1=d[i];
					city1=c[i];
					j1=c[i];
				}	
			}
			
			if( l[i]==2 ) {
				if( d[i]>min2 ) {
					min2=d[i];
					city2=c[i];
					j2=c[i];
				}
			}

			if( l[i]==3 ) {
				if( d[i]>min3 ) {
					min3=d[i];
					city3=c[i];
					j3=c[i];
				}
			}
	
		}
		for(i=0 ; i<n ;i++) {
			if(d[i]==min1&&l[i]==1) {
				if(c[i]<j1) {
					city1=c[i];
				}
				
			}
			if(d[i]==min2&&l[i]==2) {
				if(c[i]<j2) {
					city2=c[i];
				}
				
			}
			if(d[i]==min3&&l[i]==3) {
				if(c[i]<j3) {
					city3=c[i];
				}
				
			}
	
			
		} 
		cout<<min1<<" "<<city1<<endl<<min2<<" "<<city2<<endl<<min3<<" "<<city3;
		
		T--;
	}
}
