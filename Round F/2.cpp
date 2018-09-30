
#include<bits/stdc++.h>
using namespace std;
int *vi,*dis,**arr,v,e;
int minDistance()
{
	int j=0,min=999999;
	for(int i=1;i<=v;i++)
	{

		if(vi[i]==0&&dis[i]<min)
		{
			min=dis[i];
			j=i;
		}

	}
	return j;
}


void djikstras(int x)
{
	int t=v;
	while(t--)
	{	

		int u=minDistance();
		cout<<u<<endl;
		vi[u]=1;
		for(int i=1;i<=v;i++)
		{
			if(vi[i]==0&&arr[u][i]!=0&&(dis[u]+arr[u][i])<dis[i])
				dis[i]=dis[u]+arr[u][i];
		}
	}

}
int main()
{
	int temp;
	int t,x,y;
	cin>>t;
	while(t--){
	cin>>v>>e;

	arr=new int*[v+1];
	for(int i=1;i<=v;i++)
		arr[i]=new int[v+1];

	dis=new int[v+1];	
	vi=new int[v+1];

	for(int i=0;i<e;i++){
		cin>>x>>y>>temp;
		arr[x][y]=temp;
	}

	
	for(int i=1;i<=v;i++){

	memset(vi,0,sizeof(vi));
	std::fill(dis,dis+v+1,99999);
		dis[i]=0;
		djikstras(i);
		cout<<i<<endl;
		for(int k=1;k<=v;k++){
			cout<<k<<" "<<dis[k]<<endl;
		}
	}
}
	return 0;
}