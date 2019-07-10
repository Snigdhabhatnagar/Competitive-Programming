

#include <iostream>
#include<unordered_map>
using namespace std;

int main() {
	// your code goes here
	int t;
	unordered_map<char,int> umap;
	cin>>t;
	string s;
	cin>>s;
	for(int i=0; i <s.size();i++) {
		umap[s[i]]=i+1;
	}
	string *arr=new string[t];
	for(int i=0; i<t; i++) {
	    cin>>arr[i];
	}
	for(int i=0 ; i<t;i++) {
		for(int j=0;j<arr[i].size();j++) {
			if(arr[i][j]=='_') {
				cout<<" ";
			}
			else if(arr[i][j]>=97&&arr[i][j]<=122) {
			    int out=arr[i][j]-'a'+1;
	
				cout<<s[out-1];
			}
			else if(arr[i][j]>=65&&arr[i][j]<=90) {
			    int out=arr[i][j]-'A'+1;
	            char ch=s[out-1]-32;
				cout<<ch;
			}
			else {
				cout<<arr[i][j];
			}
		}
		cout<<endl;
	}
	
	return 0;
}

