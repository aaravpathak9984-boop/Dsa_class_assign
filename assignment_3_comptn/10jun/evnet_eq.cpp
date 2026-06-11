#include <bits/stdc++.h>
#include<algorithm
#include <numeric>
using namespace std;

bool isPrime(int c){
    
    bool ans=true;
    for(int i=2;i<c;i++){
        if(c%i==0){
        ans=false;
        break;
    }
    
    
}
return ans;
    
}
int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    int ans=0;
	    
	    if(a==b)ans=0;
	    
	    else{

	    	if(isPrime(c) && (__gcd(a,c)) == (__gcd(b,c))){

	    		ans++;
	    		break;


	    	}
	    	else{
	    		        
	    		        while(!isPrime(c)){
	    		        	c++;
	    		        	ans++;
	    		        }
	    		    }
	    	}

	    cout<<ans<<endl;
	}
	

}


