#include <bits/stdc++.h>

using namespace std;



int main(){

	int t;
	cin>>t;

	while(t--){

		int n,sum=0;
		cin>>n;


		int val1;
		cin>>val1;

		sum+=val1;

		for(int i=1;i<n;i++){

			int x;
			cin>>x;


			if(x>val1){

				sum+=val1;


			}

			else{
				sum+=x;

				val1=x;
			}




		}


		cout<<sum<<endl;
	}

	return 0;

	


}