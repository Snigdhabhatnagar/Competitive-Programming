#include<iostream>
using namespace std;
int main() 
{
int n,i=0,count=0;
cin>>n;
while(n!=0){
n=n/10;
count++;
}
if(count<=3){
cout<<count;
}
else{cout<<"More than 3 digits";
}
}
