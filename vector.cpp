#include<cstdio>
#include<iostream>
#include<vector>
//使用vector需要加这个头文件 
using namespace std;
int main() 
{
	vector<int>v;//
   printf("是空的吗？%c  \n",v.empty()?'t':'f');
   
   vector <char>v1;
   printf("\nv1的长度为%d  \n",v1.size());
   
   //v1.clear();
   printf("\n清除完数据的vl长度为%d  \n",v1.size());
   
   v1.push_back('A');//
   v1.push_back('B');
   v1.push_back('C');
   v1.push_back('D');
   for(int i=0;i<v1.size();i++)//
   {
   	printf("%-2c",v1[i]);
   }
    printf("\n第一个的字符%c",v1.front());//
   printf("\n最后一个的字符%c",v1.back());//
   
   v1.resize(3);// size 的范围 理解为给出的内存位置 
   printf("\n之后\n     A B C\n"); 
   for(int i=0;i<v1.size();i++)
   {
   	 cout<<v1[i]<<"  ";
   }
   //v1.begin() 是整个数据第一个 
   v1.erase(v1.begin()); 	
   v1.pop_back();//delete the end 
   cout<<endl; 
   cout<<"剩下的数"; 
   for(int i=0;i<v1.size();i++)//
   {
   	printf(" %2c",v1[i]);
   }
   return 0;
}
