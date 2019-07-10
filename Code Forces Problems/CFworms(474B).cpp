//Algo to find next small element in an array using binary search

#include<iostream>
#include <bits/stdc++.h> 

using namespace std;

int binary(int arr[],int si,int ei,int a) {
    int mid=(si+ei)/2;
    if(si>ei) {
        return ei;
    }
    if(arr[mid]==a) {
        return mid;
    }
    else if(arr[mid]>a) {
        return binary(arr,si,mid-1,a);
    }
    else {
        return binary(arr,mid+1,ei,a);
    }
 }

int main() {
    int n;
    cin>>n;
    int *arr=new int[n+1];
    arr[0]=1;
    int k;
        cin>>k;
    for(int i=1 ; i<n ; i++) {
     
        
        arr[i]=arr[i-1]+k;
        cin>>k;
    }
    
    int q;
    cin>>q;
    while(q--) {
        int a;
        cin>>a;
        
        cout<<(binary(arr,0,n-1,a)+1)<<endl;
    }
}