#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
//int a[]={1,1,2,3,4,5,6,6};
vector<int> a({1,1,2,3,4,5,6,6});
int m=unique(a,a+8)-a;//È¥ÖØº¯Êý 
cout<<m<<endl;
for(int i=0;i<m;i++)
{
	cout<<a[i];
	
}
return 0;	
 } 
