/*
#include<cstdio>
#include<iostream>
#include<algorithm>
*/
#include<bits/stdc++.h>
using namespace std;//�Ȱ��մ�С˳���ź�  Ȼ����˳������������ 
int c(int a,int b)
{
    return a>b;//����   3 2 1
//	return a<b; //˳��  1 2 3 
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
