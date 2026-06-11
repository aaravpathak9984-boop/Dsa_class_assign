#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    
	    string a,b;
	    cin>>a>>b;
	    
	    string c="";
	    
	    int len=min(n,m);
	    
	    for(int i=0;i<len;i++){
	        if(a[i]==b[i])c.push_back(a[i]);
	        
	        else break;
	        
	    }
	    
	    cout<<c<<endl;
	}

}