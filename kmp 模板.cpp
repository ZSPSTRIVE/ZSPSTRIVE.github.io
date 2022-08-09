/*/next 数组模板 
void getnext()
{
    next[0] = 0; // 第一个元素初始化为0
    int i,j;
    for(i=1,j=0; i < n2; )
    {
        if(pattern[i] == pattern[j]) { // 如果相等，计算next数组，然后同时后移
            next[i] = next[i-1]+1;
            j++; i++;
        } else {
            if(j != 0) // 不相等，判断是否为0
            {
                j = next[j-1]; // 移动
            } else next[i++] = 0;
        }
    }
}
//kmp 模板
int kmp()
{
    int i,j;
    for(i=0,j=0; i < n1 && j < n2; )
    {
        if(j == n2) break;  // 匹配结束，跳出循环
        if(str[i] == pattern[j]) // 匹配成功，同时后移
        {
            i++;
            j++;
        } else {
            if(j != 0) j = next[j-1]; // 匹配失败，若j不为0，移动
            else i++; // j为零，i移动
        }
    }
    if(j == n2) return i-j; // 返回主串中的下标
    else return -1; // 匹配失败，返回异常
}*/
//整套
#include<iostream>
#include<cstring>
using namespace std;
char str[100];
char pattern[100];
int next[100];
int n1,n2;
void getnext()
{
    next[0] = 0; // 第一个元素初始化为0
    int i,j;
    for(i=1,j=0; i < n2; )
    {
        if(pattern[i] == pattern[j]) 
		{ // 如果相等，计算next数组，然后同时后移
            next[i]=next[i-1]+1;
            j++; i++;
        } 
		else
		{
        if(j!=0) // 不相等，判断是否为0
            {
                j=next[j-1]; // 移动
            }
		 else 
			next[i++]=0;
        }
    }
}
int kmp()
{
    int i,j;
    for(i=0,j=0;i<n1&&j<n2; )
    {
        if(j == n2) break;  // 匹配结束，跳出循环
        if(str[i] == pattern[j]) // 匹配成功，同时后移
        {
            i++;
            j++;
        }
		else 
		{
            if(j!=0) 
			j=next[j-1]; // 匹配失败，若j不为0，移动
        else 
			i++; // j为零，i移动
        }
    }
    if(j==n2)
	 return i-j; // 返回主串中的下标
    else
	 return -1; // 匹配失败，返回异常
}
int main()
{
    cin>>str>>pattern;
    n1=strlen(str);
    n2=strlen(pattern);
    getnext();
    cout<<kmp();
    return 0;
}
