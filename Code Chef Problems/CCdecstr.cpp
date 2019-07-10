#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        if(n<=25){
        for(int i=n;i>=0;i--) {
            
            char ch='a'+i;
            cout<<ch;
            }
        }
        else {
            int k;
          if(n%25==0) {
              k=n/25-1;
          }
          else{
              k=n/25;
          }
                
            for(int i=n-k*25;i>=0;i--) {
            	char ch='a'+i;
                cout<<ch;
            
                n=n-25;
            
            }
            for(int j=k;j>0;j--){
            for(int i=25;i>=0;i--) {
            
            char ch='a'+i;
            cout<<ch;
            }}
        }
        cout<<endl;
    }
	// your code goes here
	return 0;
}

