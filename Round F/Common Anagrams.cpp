#include<bits/stdc++.h>
using namespace std;
int *a;
vector<char>arrA;
vector<char>arrB;

int main(){
	int t,n;
	cin>>t;
	int o=1;
	string a,b;
	string anew,bnew;
	set<string>st;
	std::vector<set<string>> v;
	while(t--){
		v.erase(v.begin(),v.end());
		cin>>n;
		cin>>a>>b;
		int k=0;
		for(int i=0;i<n;i++){
			st.erase(st.begin(),st.end());
			for(int h=0;h<n;h++){
				k=i;
				anew ="";
				bnew="";
				
				for(int j=h;j<n;j++){
					anew = anew +a[k];
					bnew = bnew +b[j];
					sort(anew.begin(),anew.end());
					sort(bnew.begin(),bnew.end());
					// cout<<anew<<" "<<bnew<<endl;
					// cout<<i<<" "<<h<<" "<<" "<<k<<" "<<j<<endl;
					if(anew==bnew){
						st.insert(anew);
					}
					k++;
					if(k>=n)
						break;
				}
	}
v.push_back(st);
	}
	

int count=0;
 set<string>:: iterator it;
 // cout<<"hi";
 for( int i=0;i<v.size();i++)
 {
 	count+=v[i].size();
 	// cout<<v[i].size()<<endl;

 }

cout<<"Case #"<<o<<": "<<count<<endl;
o++;
// st.erase(st.begin(),st.end());
		}
return 0;
}
