#include<iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T--){
		int n,i,j,flag=0;
		float summ=0;
		char firstSide;
		cin>>n;
		float sum[n];
   string a[n];
   for( i=0 ; i<n ;i++) {
   cin>>a[i];
}

    for( i=0 ; i<n ;i++) {
    sum[i]=0;
    flag=0;
   	for( j=0; j<i ;j++){

   if(a[i].compare(a[j])==0){
   	sum[i]=(float)sum[j]/2;	
   	flag=1;
   	break;
   }  
}
	if(flag==1) {
	continue;
	}
    for( j=0; j<(a[i].length()) ;j++){
	if(j==0&&(a[i][j]=='f'||a[i][j]=='d')) {
		firstSide='l';
		sum[i]=sum[i]+0.2;
		
	}
	else if(j==0&&(a[i][j]=='j'||a[i][j]=='k')) {
		firstSide='r';
		sum[i]=sum[i]+0.2;
		
				
	}
	else if((firstSide=='l'&&(a[i][j]=='f'||a[i][j]=='d'))) {
		firstSide='l';
		sum[i]=sum[i]+0.4;
		
	}
	else if((firstSide=='l'&&(a[i][j]=='j'||a[i][j]=='k')) ){
		firstSide='r';
		sum[i]=sum[i]+0.2;
		
	}
	else if((firstSide=='r'&&(a[i][j]=='j'||a[i][j]=='k')) ){
		firstSide='r';
		sum[i]=sum[i]+0.4;
		
	}
	else if((firstSide=='r'&&(a[i][j]=='f'||a[i][j]=='d')) ){
		firstSide='l';
		sum[i]=sum[i]+0.2;
	
	}
}


}
for(i=0 ;i<n ;i++){
summ=summ+sum[i];
}

 cout<<summ*10<<endl;  
	
}
}
