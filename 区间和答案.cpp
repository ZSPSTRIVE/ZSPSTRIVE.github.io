#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<int,int> PA;
int a[300010];
int s[300010];
vector<int> xb;
vector<PA> add,fw;
int find(int x)
{
	int l=0,r=xb.size()-1;
	while(l<r)
	{
		int mid=(l+r)>>1;
		if(xb[mid]>=x)
		r=mid;
		else
		l=mid+1;
	}
	return r+1;
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		add.push_back({x,y});
		xb.push_back(x);
	}
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		fw.push_back({x,y});
		xb.push_back(x);
		xb.push_back(y);
	}
	sort(xb.begin(),xb.end());
	xb.erase(unique(xb.begin(),xb.end()),xb.end());
	for(int i=0;i<add.size();i++)
	{
		int x=find(add[i].first);
		a[x]+=add[i].second;
	}
	for(int i=1;i<=xb.size();i++)
	{
		s[i]=s[i-1]+a[i];
	}
	for(int i=0;i<fw.size();i++)
	{
		int l=find(fw[i].first);
		int r=find(fw[i].second);
		cout<<s[r]-s[l-1]<<endl;
	}
	return 0;
}
