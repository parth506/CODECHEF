#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n;
	cin>>n;
	vector<int> v(n);
	for (long long i=0 ; i< n ;++i ){
	    cin>>v[i];
	}
	long long c=0;
	long long p=1;
	long long m=0;
	for(long long i= 0 ;i<n ;++i){
	    if(p==0){
	        c=0;
	        p=1;
	    }
	    m=max(m,c);
	    p=p*v[i];
	    ++c;
	    
	}
	if(n!=1){
	    cout<<m<<endl;
	}
	else if(n==1 && v[0]!=0){
	    cout<<1<<endl;
	}
	else{
	    cout<<0<<endl;
	}
	

}
