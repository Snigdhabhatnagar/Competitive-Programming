#include<iostream>
#include <bits/stdc++.h> 
#include<math.h>
#include<queue>
using namespace std;


int mod(string num, int a) 
{ 
    // Initialize result 
    int res = 0; 
  
    // One by one process all digits of 'num' 
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
  
    return res; 
}


int main() {
    int T;
    cin>>T;
    while(T--){
    unsigned int N;
    
    cin>>N;
string K;
cin>>K;
    
    unsigned int e=mod(K,N);
    unsigned int o=N-e;
   


    if(e<o) {
        cout<<2*e<<endl;
    }
    else if(e==o){
        cout<<(2*e)-1<<endl;
    }
    else {
        cout<<2*o<<endl;
    }
    
    }
}