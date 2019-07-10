#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()  {
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int sum=0;
    for(int i=0 ; i<n ; i++) {
        int x=abs((a[i]-48)-(b[i]-48));
        int y;
        if((a[i]-48)==0) {
            y=(9-(int)(b[i]-48))+1;
      
        }
        else if((b[i]-48)==0) {
            y=(9-(int)(a[i]-48))+1;
        }
        else if(a[i]>b[i]) {
        y=9-(a[i]-48)+((b[i]-48)-0)+1;
        }
        else if(a[i]<b[i]) {
            y=9-(b[i]-48)+((a[i]-48)-0)+1;
        }
   
        sum+=min(x,y);
        
    }
    cout<<sum;
}