#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
  cin>>t;
  while(t--)
  {
    unsigned long long int n;
    cin>>n;
    unsigned long long int a=n;
    int sum=0;
    while(n!=0) {
        sum+=n%10;
        n=n/10;
    }
    cout<<a<<(10-sum%10)%10<<endl;
  }
	
	return 0;
}


