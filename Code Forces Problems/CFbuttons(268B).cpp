#include<iostream>
#include <bits/stdc++.h> 

using namespace std;

int main() {
    int n;
    cin>>n;
    int count=0;
    int sum=0;
    int k=n-1;
    while(count!=n-1) {
sum+=(k*count)+k+1;
k--;
count++;
    }
    cout<<(sum+1);

}