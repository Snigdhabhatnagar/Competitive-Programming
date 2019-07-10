#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;


int main()  {
    string a,b;
    int countpA=0,countmA=0,countpB=0,countmB=0,ques=0;
    for(int i=0; i<a.size();i++) {
        if(a[i]=='+') {
            countpA++;
        }
        if(a[i]=='-') {
            countmA++;
        }
        if(b[i]=='+') {
            countpB++;
        }
        if(b[i]=='-') {
            countpB++;
        }
        if(b[i]=='?') {
            ques++;
        }
    }

    if(countpA==countpB&&countmA==countmB) {
        cout<<1;
    }
    else if((countpA-countpB)+(countmA-countmB))
}