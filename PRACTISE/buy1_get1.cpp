#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t ;
	while(t--){
	    string s;
	    cin>>s;
	    unordered_map<int,int> mpp;
	    for(int i=0 ; i< s.size() ;++i){
	        mpp[s[i]]++;
	    }
	    int c=0;
	    for(auto it:mpp){
	        if(it.second%2==0){
	            c=c+(it.second/2);
	        }
	        else{
	            c=c+(it.second/2)+1;
	        }
	    }
	    
	    cout<<c<<endl;
	}

}
