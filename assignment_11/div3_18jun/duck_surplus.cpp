#include <bits/stdc++.h>

using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){

		long long n;
		cin>>n;


	vector<long long> v(n);

	for(long long &x:v)cin>>x;

	for(int i=1;i<n;i++){

		if(v[i-1]>v[i]){
			long long tmp=v[i];

			v[i]=v[i-1]+v[i];
			v[i-1]=tmp;

		}
		
	}


	cout<<v[n-1]<<endl;


	}
	return 0;
}