#include <iostream>
using namespace std;
 
int main() {
	int T;
	cin>>T;
	while(T-- > 0)
	{
		long N , minX , maxX;
		cin>>N>>minX>>maxX;
		int w_i[N],b_i[N];
		int spammers = 0, notspammers=0;
		for (int i=0; i<N; i++)
		{
			cin>>w_i[i];
			cin>>b_i[i];
		}
 
		int even = 2 , odd = 1;
		for(int neuron = 0; neuron<N; neuron++)
		{
			even = w_i[neuron]*even + b_i[neuron];
			odd = w_i[neuron]*odd + b_i[neuron];
		}
		if (even%2 == 0)
		{
			if(odd%2 == 0)
			{
				cout<<maxX - minX + 1<<" "<<0<<endl;
			}
 
			else
			{
				notspammers = (maxX - minX)/2;
				if (minX % 2 == 0)
				{
					notspammers++;
				}
				cout<<notspammers<<" "<<maxX - minX + 1 -notspammers<<endl;
			}
		}
		else
		{
			if(odd%2==0)
			{
    			spammers=(maxX-minX+1)/2;
    			if(minX%2==0)
    			spammers++; 
    			notspammers = maxX-minX+1-spammers;
    			cout<<notspammers<<" "<<spammers<<"\n";
		    }
		    else
		    {
			    cout<<0<<" "<<maxX-minX+1<<"\n";
			}
	    }
	}
	return 0;
}
