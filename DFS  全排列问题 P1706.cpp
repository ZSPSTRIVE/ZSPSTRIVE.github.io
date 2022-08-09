#include<bits/stdc++.h>
using namespace std;
int y[15],a[15],n;//y数组判断该数是否用过
void p()
{
	for(int i=1;i<=n;i++) 
	printf("%5d",a[i]);//%5d是占5个场宽
	printf("\n");  
}
void dfs(int d)
{//Depth First Search
	if(d>n)
	{
		p();
	}
	for(int i=1;i<=n;i++)//尝试每一种可能
	{
		if(!y[i])//满足check条件
		{
			y[i]=1;//定义一个  标记 
			a[d]=i;//赋值  
			dfs(d+1);//继续下一步dfs(step+1) 
			y[i]=0;//chushizhuangtai
		}
	}
	return;//好习惯 
}
int main()
{
	scanf("%d",&n);//输入要深搜的范围 
	dfs(1);
	return 0;//好习惯 
} 
