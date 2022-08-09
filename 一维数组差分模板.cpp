#include<iostream>
using namespace std;
const int k=50000000;
int  a[k];
int  s[k];
int cf(int l,int r,int c) 
{
	s[l]+=c;	cout<<s[l]<<"s[r]"<<"\t";
	s[r+1]-=c;    cout<<s[r+1]<<" s[r+1]"<<endl;
}
int main()
{
	int n,h;//输入数据个数 
	cin>>n>>h;
	for(int i=1;i<=n;i++)//输入每个数据 
	{
	    cin>>a[i];
		cf(i,i,a[i]);
    }
while(h--) 
	{
        int l,r,c;
        cin>>l>>r>>c;
        cf(l,r,c);
    }
	for(int i=1;i<=n;i++)
	{
		a[i]=a[i-1]+s[i];
	    cout<<a[i]<<" ";
	}
	return 0;
}
 
