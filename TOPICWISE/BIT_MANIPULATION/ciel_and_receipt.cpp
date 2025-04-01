#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> v(13);
	for(int i=1 ; i<=12 ;++i){
	    v[i]=1<<(i-1);
	}
	
	int t;
	cin>>t;
	while(t--){
	    int p;
	    cin>>p;
	    int c=0;
	    for(int i=12 ; i>=1 ;--i){
	        if(p>=v[i]){
	            p=p-v[i];
	            ++c;
	        }
	        if(p>=v[i]){
	            i=i+1;
	        }
	    }
	    
	    cout<<c<<endl;
	}

}

