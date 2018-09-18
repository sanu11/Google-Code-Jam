#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n,x,y,p,temp;
	int count[5001]={0};
	int k=1;
	while(t--){
		cin>>n;
		memset(count,0,sizeof(count));
		for(int i=0;i<n;i++){
			cin>>x>>y;
			for(int i=x;i<=y;i++){
				count[i]++;

			}
		}
			cin>>p;
			cout<<"Case #"<<k<<": ";
			while(p--){
				cin>>temp;
				cout<<count[temp]<<" ";
			}
			cout<<endl;
			k++;	

		}


	return 0;
}