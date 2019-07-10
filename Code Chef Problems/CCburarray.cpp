#include<iostream>
#include <algorithm> 
#include<vector>
#include <queue>
#include<map>
#include<set>
using namespace std;
map<long long,long long> map1;
long long findMax(long  long r) {
    if(!map1.count(r))
        map1[r]=r;
    return map1[r]==r? r: map1[r]=findMax(map1[r]);
   
   
   
}
int main() {
    int T;
    cin>>T;
    
    while(T--) {
        map1.clear();
        long long n;
        int q;
        cin>>n>>q;
        long long s=0;
        
          
        for(int i=0 ; i<q ; i++) {
            int t;
            cin>>t;
            if( t==1 ) {
                long long x;
                cin>>x;
                x=x+s;
                map1[x]=x-1;
            }
            else {
                
                long long l,r;
                cin>>l>>r;
                l=l+s;
                r=r+s;
                long long max=findMax(r);
                if(max>=l) {
                  
                cout<<max<<endl;
                  s=(s+(max))%n;
                }
                else{
                    cout<<"0"<<endl;
                }
                
            }
        }
    }
    return 0;
}