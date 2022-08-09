#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a,b,c;
	string x,y;
	cin>>x>>y;
	for(int i=x.size()-1;i>=0;i--)
	a.push_back(x[i]-'0');
	for(int i=y.size()-1;i>=0;i--)
	b.push_back(y[i]-'0');
	int t=0;
	for(int i=0;i<a.size()||i<b.size();i++)
	{
		if(i<a.size())
		t+=a[i];
		if(i<b.size())
		t+=b[i];
		c.push_back(t%10);
		t/=10;
	}
	if(t)
	c.push_back(1);
	for(int i=c.size()-1;i>=0;i--)
	cout<<c[i];
	return 0;	
}
