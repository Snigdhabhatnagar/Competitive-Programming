#include <iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) {
		int n,k;
		cin>>n>>k;
		vector<int> v;
		bool flag=false;
		for(int i=0;i<n;i++) {
			int k;
			cin>>k;
			v.push_back(k);
		}
		priority_queue<int> pqMax;
		priority_queue<int,vector<int>,greater<int> > pqMin;
		int i=0,j=1;
		int sumM=0,sumT=0;
		
		while(i<n||j<n) {
			if(i<n){
			pqMax.push(v[i]);
			sumM+=v[i];
			i+=2;
		}
		if(j<n){		
			pqMin.push(v[j]);	
			sumT+=v[j];	
			j+=2; 
		}
		
		}
		if(sumT>sumM) {
		
			flag=true;
			
		}
	
		while(k--&&pqMax.top() > pqMin.top()&&!flag) {
			int num1=pqMax.top();
			int num2=pqMin.top();
			sumM=sumM-num1+num2;
		
			sumT=sumT+num1-num2;
			pqMax.pop();
			pqMin.pop();
			pqMin.push(num1);
			pqMax.push(num2);
		
			if(sumM<sumT) {
				flag=true;
				break;
			}	
		}
		if(flag) {
			cout<<"YES"<<endl;
		}
		else{
	
		cout<<"NO"<<endl;
	}
		
	}
	return 0;
}

