/*
   ���ֵı���
   �߽����� 
   �е�����һ�����Զ���
   �޵����Բ�һ�����ܶ��� 
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
     if(a[mid]<=x)//������������Ļ����������Ƶ���� 
     l=mid;//��mid��r������ҿ�  
     else
     r=mid-1;//������ͬ�����������λ�ÿ��ҵ�  ��l��mid-1������ҿ� 
  }*/
  while(l<r)
  {
     int mid=(l+r)/2;
     if(a[mid]>=x)//������������Ļ����������Ƶ���� 
     r=mid;//��l��mid�����ұ� 
     else
     l=mid+1;//������ͬ�����������λ�ÿ����  ��mid+1��r�����ұ� 
  } 
  cout<<l+1;//����ֵ�Ƕ�Ӧ������ֵ 
  return 0;	
} 
