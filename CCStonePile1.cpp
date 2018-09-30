#include<iostream>
using namespace std;
int min(int a,int b) {
	return a<b?a:b;
}
int main() {
	int T;
	cin>>T;
	int a,b,c,x,y;
	while(T>0){
	cin>>a>>b>>c>>x>>y;
	if(a+b+c==x+y) {
		if(min(min(a,b),c)<=min(x,y)) {
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	else{
		cout<<"NO"<<endl;
	}
	T--;
}
}
