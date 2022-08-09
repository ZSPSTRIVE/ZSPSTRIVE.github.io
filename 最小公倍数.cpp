#include <bits/stdc++.h>
using namespace std;
/*int GCD(int m,int n)//最大公约数
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
	 cout<<a*b/__gcd(a,b)<<endl;//最小公倍数
	 cout<<__gcd(a,b);//最大公约数 
	}
	return 0;
}
 /*A，B的最小公倍数=
 A*B/A，B的最大公约数
*求最大公约数---碾转相除法：
转换为A，B相除的余数与A，B间较小数的最大公约数*/
