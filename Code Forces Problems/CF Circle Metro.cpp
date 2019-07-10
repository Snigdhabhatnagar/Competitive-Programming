#include<iostream>
#include<algorithm>
#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n,a,x,b,y;
    cin>>n>>a>>x>>b>>y;
    
    int i=a,j=b;
    i--,x--,j--,y--;
    bool flag=false;
    while(true) {
    	if(i==j) {
		
			cout<<"YES"<<endl;
			return 0;
		}
		if(i==x||j==y) {
			break;
		}
    	i=(i+1)%n;
    	j=(j-1+n)%n;
    }
	

		cout<<"NO"<<endl;
	
}
