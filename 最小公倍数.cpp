#include <bits/stdc++.h>
using namespace std;
/*int GCD(int m,int n)//���Լ��
{
    int r;
    while(m%n)
    {
        r=m%n;
        m=n;
        n=r;
    }
    return n;
}*/
int main()
{
	int a, b;
	while (cin>>a>>b)
	{
	 cout<<a*b/__gcd(a,b)<<endl;//��С������
	 cout<<__gcd(a,b);//���Լ�� 
	}
	return 0;
}
 /*A��B����С������=
 A*B/A��B�����Լ��
*�����Լ��---��ת�������
ת��ΪA��B�����������A��B���С�������Լ��*/
