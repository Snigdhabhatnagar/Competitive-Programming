#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T>0) {
		int N,i;
		cin>>N;
		double p[N],d[N],q[N];
	
		double loss[N],after_discount[N],increased_price[N],sum=0.0000000000000,gain[N];
			cout.precision(14);
		for(i=0 ; i<N ; i++ ){ 
			cin>>p[i]>>q[i]>>d[i];
		}
		for(i=0 ; i<N ;i++){
	
		increased_price[i] = p[i]+(double)((d[i]*p[i])/100);
		after_discount[i] = increased_price[i] - (double)((d[i]*increased_price[i])/100);
			loss[i]= (p[i]-after_discount[i])*q[i];
			sum=sum+loss[i];
	
	}
	cout<<sum<<endl;
		T--;
	}
}
