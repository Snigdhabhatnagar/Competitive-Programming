#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	int s1[10],s2[10],s3[10],i,j,sum[10];
	while(T-- > 0) {
		int count=0;
		for(i=0 ; i<3 ; i++) {
			cin>>s1[i]>>s2[i]>>s3[i];
		}
		for(i=0 ; i<3 ; i++){
		sum[i]=s1[i]+s2[i]+s3[i];
		}
		if(sum[0]==sum[1]||sum[1]==sum[2]||sum[2]==sum[0]){
			cout<<"No";
		}
		else{
			for(i=0 ; i<3 ; i++){
				for(j=0;j<3;j++){
			if(s1[i]>=s1[j]&&s2[i]>=s2[j]&&s3[i]>=s3[j]) {
				if(i!=j) {
					count++;
				}
		}
			}
			
	}
		}
		if(count>2) {
			cout<<"Yes";
		}
		else{
			cout<<"No";
		}
	}
}

