#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T--) {
		int N;
		cin>>N;		
		int *arr=new int[N+1];	
		for(int i=1 ; i<=N;i++) {
			cin>>arr[i];
		}
		int ans=0;
		vector<int> v;
		for(int i=1; i<=N;i++) {

			if(arr[i]==0) {
				v.insert(v.begin(),i);		
			}
			
			else {					
				int j;	
				for(j=0;j<v.size();j++) {
					if(v[j]==arr[i]) {
						break;
					}
				}
					ans+=min(j+1, ((int)v.size())-j-1);			
					v.insert(v.begin()+j+1,i);		
		}
	
		}
		cout<<ans<<endl;
		
		
	}
}
