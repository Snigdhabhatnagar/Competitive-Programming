#include<iostream>
#include <bits/stdc++.h> 
#include<climits>
#include<math.h>
#include<map>
using namespace std;

int main() {
    char ch;
    cin>>ch;
    map<char,int> mp;
    map<int,char> mp1;
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    char arr[31];
    strcpy(arr,s.c_str());
   
    for(int i=0 ; i<30 ; i++) {
        mp1[i]=arr[i];
        mp[arr[i]]=i;
        
    }
    string a;
    cin>>a;
    
    if(ch=='L') {
        for(int i=0; i<a.size();i++) {
            int k=mp[a[i]];
            
            a[i]=mp1[k+1];
            
        }
    }
    else {
         for(int i=0; i<a.size();i++) {
            int k=mp[a[i]];
            
            a[i]=mp1[k-1];
            
        }
    }
    cout<<a;
}