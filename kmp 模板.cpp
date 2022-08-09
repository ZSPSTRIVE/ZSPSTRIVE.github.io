/*/next ����ģ�� 
void getnext()
{
    next[0] = 0; // ��һ��Ԫ�س�ʼ��Ϊ0
    int i,j;
    for(i=1,j=0; i < n2; )
    {
        if(pattern[i] == pattern[j]) { // �����ȣ�����next���飬Ȼ��ͬʱ����
            next[i] = next[i-1]+1;
            j++; i++;
        } else {
            if(j != 0) // ����ȣ��ж��Ƿ�Ϊ0
            {
                j = next[j-1]; // �ƶ�
            } else next[i++] = 0;
        }
    }
}
//kmp ģ��
int kmp()
{
    int i,j;
    for(i=0,j=0; i < n1 && j < n2; )
    {
        if(j == n2) break;  // ƥ�����������ѭ��
        if(str[i] == pattern[j]) // ƥ��ɹ���ͬʱ����
        {
            i++;
            j++;
        } else {
            if(j != 0) j = next[j-1]; // ƥ��ʧ�ܣ���j��Ϊ0���ƶ�
            else i++; // jΪ�㣬i�ƶ�
        }
    }
    if(j == n2) return i-j; // ���������е��±�
    else return -1; // ƥ��ʧ�ܣ������쳣
}*/
//����
#include<iostream>
#include<cstring>
using namespace std;
char str[100];
char pattern[100];
int next[100];
int n1,n2;
void getnext()
{
    next[0] = 0; // ��һ��Ԫ�س�ʼ��Ϊ0
    int i,j;
    for(i=1,j=0; i < n2; )
    {
        if(pattern[i] == pattern[j]) 
		{ // �����ȣ�����next���飬Ȼ��ͬʱ����
            next[i]=next[i-1]+1;
            j++; i++;
        } 
		else
		{
        if(j!=0) // ����ȣ��ж��Ƿ�Ϊ0
            {
                j=next[j-1]; // �ƶ�
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
        if(j == n2) break;  // ƥ�����������ѭ��
        if(str[i] == pattern[j]) // ƥ��ɹ���ͬʱ����
        {
            i++;
            j++;
        }
		else 
		{
            if(j!=0) 
			j=next[j-1]; // ƥ��ʧ�ܣ���j��Ϊ0���ƶ�
        else 
			i++; // jΪ�㣬i�ƶ�
        }
    }
    if(j==n2)
	 return i-j; // ���������е��±�
    else
	 return -1; // ƥ��ʧ�ܣ������쳣
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
