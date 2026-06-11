#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    
	    int n,k;
	    cin>>n>>k;
	    
	    vector<int>v(n,0);

	    int cp=0;
	    int d=1;

	    for(int i=k;i>=1;i--){
	    	v[cp]+=i;



	    	if(d==1){
	    		if(cp==n-1){
	    			d=-1;

	    		}
	    		else cp++;
	    	}
	    	else{
	    		if(cp==0){
	    			d=1;
	    		}
	    		else cp--;
	    	}
	    }
	    
	 
	    int ms=INT_MIN;


	    for(int i=0;i<n;i++){

	    	ms=max(ms,v[i]);

	    }

	    cout<<ms<<endl;
	    
	    
	}

}