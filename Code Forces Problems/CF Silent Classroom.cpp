#include<iostream>
#include<algorithm>
#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin>>n;
    string *arr=new string[n];
    for(int i=0 ; i<n ;i++) {
    	cin>>arr[i];
	}
	int *a=new int[26];
	for(int i=0 ; i<26;i++) {
		a[i]=0;
	}
	for(int i=0 ; i<n ;i++) {
    	int num=arr[i][0]-'a';
    	a[num]++;
	}


int chat=0;

	for(int i=0 ; i<26 ;i++) {
    	if(a[i]>2) {
    		int first=a[i]/2;
    		int second=a[i]-first;
    		
    		if(first>=2){
			
    		chat+=(first*(first-1))/2;
    		
    	}
    		if(second>=2){
    		chat+=(second*(second-1))/2;
    	
		}
		
		}
	}
	cout<<chat<<endl;
	
	
	
	
}
