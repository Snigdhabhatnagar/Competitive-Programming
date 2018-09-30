#include<iostream>
using namespace std;
int main() {
	int T,L,R,a,i,j,b,n;
 cin>>T;
 while(T>0){
		int count=0;
		cin>>L>>R;
	for(j=L ; j<R ; j++) {
			int sum=0,sum2=0,flag=1;
			for(i=L ; i<R ; i++) {
				int l=i;
	
			while(l!=0){
			a=l%10;
			l=l/10;
			sum=sum+a;

		}
		int k=j;
		while(k!=0){
			b=k%10;
			k=k/10;
			sum2=sum2+b;
	
		}
		int min=sum<sum2?sum:sum2;
		for(n=2 ; n<min ; n++){
		if((sum%n!=0)&&(sum2%n!=0)){
			flag=1;
		}
		}
		if(flag==1) {
			count++;
		}
		}
		}
		cout<<count<<endl;
T--;	
}
}
