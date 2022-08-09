/*
#include<cstdio>
#include<iostream>
#include<algorithm>
*/
#include<bits/stdc++.h>
using namespace std;//先按照大小顺序排好  然后按照顺序或者逆序输出 
int c(int a,int b)
{
    return a>b;//逆序   3 2 1
//	return a<b; //顺序  1 2 3 
}
    int main()
{
    int i;
	//int a[5]={1,2,3,4,5};
	int  a[5];
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	sort(a,a+5,c);
	for(i=0;i<5;i++)
	{
    cout<<a[i]<<"  ";
     }
	return 0;
}
