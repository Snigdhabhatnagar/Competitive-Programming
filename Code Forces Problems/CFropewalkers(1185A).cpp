#include<iostream>
#include <algorithm>
using namespace std;


int main()  {
    int *arr=new int[4];
    for(int i=0;i<3;i++) {
        cin>>arr[i];
    }
    
    int d;
    cin>>d;
    std::sort(arr,arr+3);
    int n=0;
    int num=0;
    if(arr[1]-arr[0]<d){
        n=d-(arr[1]-arr[0]);
    
    num+=n;
    }
    if (arr[2]-arr[1]<d) 
    {
        n=d-(arr[2]-arr[1]);
        
        num+=n;
    }

        cout<<num;
  

}