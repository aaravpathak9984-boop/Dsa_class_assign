#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin>>n;
	vector<int> v(n),ans(n,1);

	stack<int>s;

	for(int &x:v)cin>>x;


for(int i=0;i<n;i++){

	while(!s.empty() && v[s.top()]<=v[i]){
		s.pop();
	}

	if(s.empty()){
		ans[i]=i+1;
	}
	else ans[i]=i-s.top();

	s.push(i);

}


	// for(int i=1;i<n;i++){

			

	// 	 for (int j = i - 1; (j >= 0) && (v[i] >= v[j]); j--) {
    //         ans[i]++;
    //     }

		
	// }

	for(auto x:ans)cout<<x<<" ";
}