#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

#define ll long long int

//int mergeIt(int arr[],int n) {
//	if(arr[0]=='\0') {
//		return 0;
//	}
//	
//int x=INT_MIN,y=INT_MIN,z=INT_MIN;
//
//	if(arr[0]%3==0) {
//		x=1+mergeIt(arr+1,n);
//	}
//	else if((arr[0]+arr[1])%3==0&&arr[1]!='\0'){
//		y=1+mergeIt(arr+2,n);
//	}
//	else if((arr[0]+arr[1]+arr[2])%3==0&&arr[2]!='\0') {
//		z=1+mergeIt(arr+3,n);
//	}
//	if(arr[0]%3!=0&&arr[1]=='\0') {
//		mergeIt(arr+1,n);
//	}
//	return max(x,max(y,z));
//	
//}

int mergeIt(int arr[],int n) {
	int i=0;j=n;
	int count=0;
	while(i<j) {
		if(arr[i]%3==0&&arr[j]%3!=0) {
			count++;
			i++;
		}
		else if(arr[j]%3==0&&arr[i]%3!=0) {
			count++;
			j--;
		}
		else if(arr[j]%3==0&&arr[j]%3==0) {
			count+=2;
			j--;
			i++;
		}
		else if((arr[j]+arr[i])%3==0) {
			count++;
			j--;
			i++;
		}
		
		
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int *arr=new int[n];
		for(int i=0; i<n;i++) {
			cin>>arr[i];
		}
		cout<<mergeIt(arr,n);
	}
}
