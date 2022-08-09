#include<string>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string a,c;
int b,d;
int main()
{
        cin>>a>>b;  
    for (int i=0;i<a.length();i++)
	       a[i]-=48;  
    for (int i=0;i<a.length();i++)
           c.push_back((d*10+a[i])/b+48),d=(d*10+a[i])%b; 
    for (int i=0;c[0]==48;i++)
	       c.erase(c.begin(),c.begin()+1);  
        cout<<c;  
    return 0;     //³ý·¨ 
}
