#include<iostream> 
using namespace std;
int main() {
	int T,i;
	cin>>T;
	for(i=1 ; i<=T ; i++ ) {
		int M,N,Rx,Ry,x=0,y=0,j=0,L;
		char D[10000];
		cin>>M>>N>>Rx>>Ry>>L;
		cin>>D;
		while(j<L) {
		if(D[j]=='U') {
			y=y+1;		
		}
		else if(D[j]=='D') {
			y=y-1;		
		}
		else if(D[j]=='L') {
			x=x-1;		
		}
		else if(D[j]=='R') {
			x=x+1;		
		}
		j++;	
	}
	if((x<0||x>M) || (y<0||y>N)){
		cout<<"Case "<<i<<": DANGER"<<endl;
		
	}
	else if(x==Rx&&y==Ry) {
		cout<<"Case "<<i<<": REACHED"<<endl;
		
	}
	else{
		cout<<"Case "<<i<<": SOMEWHERE"<<endl;
		
	}
}
}
