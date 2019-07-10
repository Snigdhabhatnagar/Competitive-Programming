#include<iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    int n=a;
    int sum=0;
    while(a!=0) {
        sum+=a%10;
        a/=10;
    }
    if(sum%4==0) {
        cout<<n;
    }
    else {
    	int sum1=sum;
        while(sum1%4!=0) {
            n+=1;
            a=n;
            sum1=0;
            while(a!=0) {
            sum1+=a%10;
            a/=10;
       }
        }
        cout<<n;
    }
}
