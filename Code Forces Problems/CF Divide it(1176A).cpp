#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

#define ll long long

int divideIt(ll n) {
	if(n%2!=0&&n%3!=0&&n%5!=0&&n!=1) {
		return INT_MAX;
	}
	if(n==1) {
		return 0;
	}
	
	if(n==0) {
	
		return -1;
	}
	int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	
	if(n%2==0) {
		x=divideIt(n/2);
	}
	else if (n%3==0) {
		y=divideIt((2*n)/3);
	}
	else if(n%5==0) {
		z=divideIt((4*n)/5);
	}
	else{
		return -1;
	}
	if(min(x,min(y,z))==INT_MAX) {
		return INT_MAX;
	}
	else{
	return 1+min(x,min(y,z));		
	}


}

int main() {
	int q;
	cin>>q;
	while(q--)  {
		ll n;
		cin>>n;	
		ll num=divideIt(n);
		if(num==-1||num==INT_MAX) {
			cout<<-1<<endl;
		}
		else{
			cout<<num<<endl;
		}
	

	}
	return 0;
}
