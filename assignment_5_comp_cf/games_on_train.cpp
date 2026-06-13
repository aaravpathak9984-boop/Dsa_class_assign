#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){

		int n;
		cin>>n;

		int mine=INT_MAX,maxe=INT_MIN;

		for(int i=0;i<n;i++){

			int val;
			cin>>val;

			if(val<mine)mine=min(mine,val);

			if(val>maxe)maxe=max(maxe,val);

		}

		cout<<maxe-mine+1<<endl;
	}
}