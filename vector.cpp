#include<cstdio>
#include<iostream>
#include<vector>
//ʹ��vector��Ҫ�����ͷ�ļ� 
using namespace std;
int main() 
{
	vector<int>v;//
   printf("�ǿյ���%c  \n",v.empty()?'t':'f');
   
   vector <char>v1;
   printf("\nv1�ĳ���Ϊ%d  \n",v1.size());
   
   //v1.clear();
   printf("\n��������ݵ�vl����Ϊ%d  \n",v1.size());
   
   v1.push_back('A');//
   v1.push_back('B');
   v1.push_back('C');
   v1.push_back('D');
   for(int i=0;i<v1.size();i++)//
   {
   	printf("%-2c",v1[i]);
   }
    printf("\n��һ�����ַ�%c",v1.front());//
   printf("\n���һ�����ַ�%c",v1.back());//
   
   v1.resize(3);// size �ķ�Χ ���Ϊ�������ڴ�λ�� 
   printf("\n֮��\n     A B C\n"); 
   for(int i=0;i<v1.size();i++)
   {
   	 cout<<v1[i]<<"  ";
   }
   //v1.begin() ���������ݵ�һ�� 
   v1.erase(v1.begin()); 	
   v1.pop_back();//delete the end 
   cout<<endl; 
   cout<<"ʣ�µ���"; 
   for(int i=0;i<v1.size();i++)//
   {
   	printf(" %2c",v1[i]);
   }
   return 0;
}
