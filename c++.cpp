/*  �̶���ʽ 
#include<iostream>
using namespace std;
int main()
{
    return 0;	
}
*/
//#include<>   ��������ӹ���  ����ʹ��c���Ե�һЩ���� ����Ҫ����cstdio
//               �ַ���  �㷨�������⹦�� ������  
//��Щͷ�ļ����ԼӺܶ� һ�����ٸ�����
/*
#include<cstring>  �ַ��� 
#include<cmath>     ��ѧ��ʽ 
#include<cstdlib>    ���⹦�� 
#include<bits/std++.h>  ����ͷ ��ƽʱ��������͵���ã����ⳡ���ټӱ��ͷ�ļ��� 
*/ 


/* 
#include<iostream>
using namespace std;
int main()
{
	int x,y[99]={0};// cin cout  �κ����Ͷ����� 
	cin>>x;//scanf("%d",&x);
	//1//double x,y;
	//cin>>x;
	
	//2//string x;
	//cin >>x; 
	 
	//�������ʱ
	//int a,b,c,d;
	//cin>>a>>b>>c>>d; 
	for(int i=0;i<x;i++)
	{
		y[i]+=2;
	}
	for(int i=0;i<x;i++)
	{
		cout<<y[i]<<endl;//printf("%d\n",y[i]}; 
		//  endl �൱��\n 
	}
	return 0;
}

*/



/*
   λ����
   1.&(AND) //ͬ1 ��0 
   2.|(OR)  //
   3.~(NOT)
   4.^ (XOR)
   5.<<(����)   ����һλ�൱�ڳ���2��k�η� 
   6.>>�����ƣ� ����һλ�൱�ڳ���2��k�η� 
   3^6=5;
   
#include<iostream>
using namespace std;
int main()
{
	int a=3,b=6;//   011   110  101
	cout<<(a^b)<<endl;
}

    ���÷���
	1.��ĳ�����Ķ�������ʽ 
    2.�ж�ĳ�����ֵĶ����Ʊ�ʾ�ĵ�n+1λ����������ģ���0��ʼ�ģ���0����1
	3.��������ƴ������һ��1�ڵ����ڼ�λ 
*/
#include<iostream>
using namespace std;
int main()
{
      int a=10,b=3;  // 1 0 1 0
	  for(int i=3;i>=0;i--)// >=0  ����� >0 ����� 
	  {
	  //+���    �ұ�Ϊ��ʼλ  
	  cout<<(a>>i&1)<<"-��"<<i+1<<"λ"<<"  ";//����1
      }
	  cout<<endl<<(a>>1&1)<<endl<<"// 0010(a)  0001(>>2) �����Ʊ�ʾ"<<"\n";//����2     
	  cout<<(b&-b)<<endl<<"0 0 1 1 >> 0 0 0 1  �����Ʊ�ʾ";//����3 
} 



