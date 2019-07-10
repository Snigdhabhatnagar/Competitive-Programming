#include<iostream>
#include<climits>
#include<math.h>
using namespace std;



int main()  {
    int n,m;
    cin>>n>>m;
    int count=0;
    while(m!=n){
        if(m<n){
        n=n-1;
        count++;

        }    
            else {
                if(m%2!=0) {
                     m=((m-1)/2);
                count+=2;
                }
           else {
                m=m/2;
                count++;
            }
            }
    }
   
    
     cout<<count;
}