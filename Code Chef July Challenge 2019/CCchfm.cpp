
#include<iostream>
#include <bits/stdc++.h> 

using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--) {
        long long n;
        cin>>n;
        
       map<long long,long long> v;
        for(long long i=0 ; i<n ; i++) {
            long long p;
            cin>>p;
            v[i+1]=p;
        }
        
 map<long long,long long> :: iterator itr1;
 long long sum=0;
        for(itr1=v.begin() ; itr1!=v.end();itr1++) {
           
            sum+=itr1->second;
        }
        
     
      
        double average =((double)sum/v.size()); 
  
        double newSum=(double)(n-1)*average;
       
        map<long long,long long> :: iterator itr;
      

        for(itr=v.begin() ; itr!=v.end();itr++) {
            if((itr->second)==(sum-newSum)) {
                cout<<itr->first<<endl;
                break;
            }
           
        }
        if(itr==v.end() ) {
            cout<<"Impossible"<<endl;
        }
       

    }
}