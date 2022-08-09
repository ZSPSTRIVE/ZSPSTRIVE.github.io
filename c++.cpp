/*  固定格式 
#include<iostream>
using namespace std;
int main()
{
    return 0;	
}
*/
//#include<>   《》里面加功能  例如使用c语言的一些功能 就需要加上cstdio
//               字符串  算法或者特殊功能 单独加  
//这些头文件可以加很多 一会给你举个例子
/*
#include<cstring>  字符串 
#include<cmath>     数学公式 
#include<cstdlib>    特殊功能 
#include<bits/std++.h>  万能头 （平时场景可以偷懒用，特殊场合再加别的头文件） 
*/ 


/* 
#include<iostream>
using namespace std;
int main()
{
	int x,y[99]={0};// cin cout  任何类型都可以 
	cin>>x;//scanf("%d",&x);
	//1//double x,y;
	//cin>>x;
	
	//2//string x;
	//cin >>x; 
	 
	//多个输入时
	//int a,b,c,d;
	//cin>>a>>b>>c>>d; 
	for(int i=0;i<x;i++)
	{
		y[i]+=2;
	}
	for(int i=0;i<x;i++)
	{
		cout<<y[i]<<endl;//printf("%d\n",y[i]}; 
		//  endl 相当于\n 
	}
	return 0;
}

*/



/*
   位运算
   1.&(AND) //同1 异0 
   2.|(OR)  //
   3.~(NOT)
   4.^ (XOR)
   5.<<(左移)   左移一位相当于乘以2的k次方 
   6.>>（右移） 右移一位相当于除以2的k次方 
   3^6=5;
   
#include<iostream>
using namespace std;
int main()
{
	int a=3,b=6;//   011   110  101
	cout<<(a^b)<<endl;
}

    常用方法
	1.求某个数的二进制形式 
    2.判断某个数字的二进制表示的第n+1位（类似数组的，从0开始的）是0还是1
	3.输出二进制串中最后一个1在倒数第几位 
*/
#include<iostream>
using namespace std;
int main()
{
      int a=10,b=3;  // 1 0 1 0
	  for(int i=3;i>=0;i--)// >=0  正输出 >0 反输出 
	  {
	  //+输出    右边为起始位  
	  cout<<(a>>i&1)<<"-第"<<i+1<<"位"<<"  ";//功能1
      }
	  cout<<endl<<(a>>1&1)<<endl<<"// 0010(a)  0001(>>2) 二进制表示"<<"\n";//功能2     
	  cout<<(b&-b)<<endl<<"0 0 1 1 >> 0 0 0 1  二进制表示";//功能3 
} 



