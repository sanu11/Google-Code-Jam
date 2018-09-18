#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,e,n;
	cin>>t;
	int k=1;
	while(t--){	
		cin>>e>>n;
		std::vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		int i=0,j=n-1;
		int h=0;
		int flag=1;
		
		while(i<=j&&j>=0){
			
			while(i<=j&&e>a[i]){
				e=e-a[i];
				h+=1;
				i++;
			}
			if(i==j){
				break;
			}
			// cout<<e <<" "<<h<<" "<<i<<" "<<j<<endl;

			if(j-i+1>=2&&h>0){
				e=e+a[j];
				h-=1;
				j--;
			}
			else
				break;

		}
		cout<<"Case #"<<k<<": "<<h<<endl;
		k++;

	}
	return 0;
}