#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;


int main()  {
    int n;
    cin>>n;
    int m;
    cin>>m;
    int k=(n+1)/2;
    int ans=(((k+m-1)/m)*m);
    if(ans<n) {
        cout<<ans;
    }
    else{
        cout<<-1;
    }
}