#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int i=0,j=n-1;
	while(i<j) {
		if((arr[i]+arr[j])%2!=0&&arr[j]<arr[i]) {
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j--;
		}
		else if(arr[j]<arr[i]){
			i++;
		}
		else if(arr[j]>arr[i]) {
			j--;
		}
		
	}
	for(int i=0 ; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	
}
