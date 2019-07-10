#include<iostream>
#include <bits/stdc++.h> 
#include<math.h>
#include<queue>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--) {
        int q;
        cin>>q;
        map<int,int> mp;
        int e=0,o=0;
        for(int i=0 ; i<q ; i++) {
            int x;
            cin>>x;
            if(mp[x]==1) {
                cout<<e<<" "<<o<<endl;
                continue;
            }
            mp[x]=1;
            int k=x;
            int count1=0;
            while(k!=0) {
                int rem=k%2;
                if(rem==1) {
                    count1++;
                }
               
                k/=2;
            }
            if((count1)%2==0&&count1!=0) {
                e++;
            }
            else if(count1!=0){
                o++;
                
            }
            
            map<int,int>:: iterator it;
            for(it=mp.begin(); it!=mp.end();it++) {
                
                if(it->first!=x) {
                    int xr=(x^(it->first));
                    if(mp[xr]!=1){
                    mp[xr]=1;
                    int k=xr;
                    int count1=0;
            while(k!=0) {
                int rem=k%2;
                if(rem==1) {
                    count1++;
                }              
                k/=2;
            }
            if((count1)%2==0&&count1!=0) {
                e++;
            }
            else if(count1!=0){
                
                o++;
            }
            }
                }
            }
            cout<<e<<" "<<o<<endl;
        }
    }
}