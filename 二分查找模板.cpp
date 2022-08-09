/*
   二分的本质
   边界问题 
   有单调性一定可以二分
   无单调性不一定不能二分 
   */
#include<iostream>
using namespace std;
int main()
{ 
  
  int a[10];
  for(int  i=0;i<10;i++)
  {
  	cin>>a[i];
  }
  int l=0,r=9;
  int x;
  cin>>x;
  /*while(l<r)
  {
  	int mid=(l+r+1)/2;
     if(a[mid]<=x)//如果满足条件的化就先先右移的情况 
     l=mid;//【mid，r）左闭右开  
     else
     r=mid-1;//对于相同数据优先输出位置靠右的  【l，mid-1）左闭右开 
  }*/
  while(l<r)
  {
     int mid=(l+r)/2;
     if(a[mid]>=x)//如果满足条件的化就先先左移的情况 
     r=mid;//（l，mid】左开右闭 
     else
     l=mid+1;//对于相同数据优先输出位置靠左的  （mid+1，r】左开右闭 
  } 
  cout<<l+1;//返回值是对应的坐标值 
  return 0;	
} 
