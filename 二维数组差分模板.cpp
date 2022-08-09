#include<iostream>
using namespace std;
int a[100][100];
int s[100][100];
void insert(int x1,int y1,int x2,int y2,int k)
{
	s[x1][y1]+=k;
	s[x2+1][y1]-=k;
	s[x1][y2+1]-=k;
	s[x2+1][y2+1]+=k;
}
int main()
{
	int m,n;
	cout<<"输入二维数组的行数和列数"<<endl;
	cin>>m>>n;
	cout<<"依次输入每个数据"<<endl;
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	cin>>a[i][j];
	
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	insert(i,j,i,j,a[i][j]);
	
	cout<<"输入想要改变的矩阵范围的左上顶点坐标和右下顶点坐标，以及想要改变的值"<<endl;
	int x1,y1,x2,y2;
	int k;
	cin>>x1>>y1>>x2>>y2>>k;
	insert(x1,y1,x2,y2,k);	
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	s[i][j]+=s[i-1][j]+s[i][j-1]-s[i-1][j-1];
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		cout<<s[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
