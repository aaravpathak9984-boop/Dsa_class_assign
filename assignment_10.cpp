#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n,k,ts=0,cnt=0;
	    cin>>n>>k;
	    
	   vector<int>v(n) ;
	    
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        
	        ts+=v[i];
	        
	    }
	    
	    
	    
	   
	    for(int i=0;i<n;i++){
	        int sc=0;
	        for(int j=i+1;j<n;j++){
	           if (ts + v[i] + v[j] > 2 * k) {
                    cnt++;
                }
	        }
	   
	       
	    }
	    
	    cout<<cnt<<endl;
	}

}