#include<bits/stdc++.h>
using namespace std;
int y[15],a[15],n;//y�����жϸ����Ƿ��ù�
void p()
{
	for(int i=1;i<=n;i++) 
	printf("%5d",a[i]);//%5d��ռ5������
	printf("\n");  
}
void dfs(int d)
{//Depth First Search
	if(d>n)
	{
		p();
	}
	for(int i=1;i<=n;i++)//����ÿһ�ֿ���
	{
		if(!y[i])//����check����
		{
			y[i]=1;//����һ��  ��� 
			a[d]=i;//��ֵ  
			dfs(d+1);//������һ��dfs(step+1) 
			y[i]=0;//chushizhuangtai
		}
	}
	return;//��ϰ�� 
}
int main()
{
	scanf("%d",&n);//����Ҫ���ѵķ�Χ 
	dfs(1);
	return 0;//��ϰ�� 
} 
