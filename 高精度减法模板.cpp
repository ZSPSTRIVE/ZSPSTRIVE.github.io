
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[1000],b[1000];
	int i,j,k;
	gets(a);   gets(b);
	for(i=strlen(a)-1,j=strlen(b)-1;i>=0;i--,j--){
		if(j<0)
		{//a��b��ʱ
			continue;
		}		
		if(a[i]>=b[j])
		{
			a[i]=a[i]-b[j]+48;
		}
		else if(a[i]<b[j])
		{//a[i]С��b[j]ʱ
			k=1;
			while(a[i-k]==48)
			{//������λΪ0�Ĳ��ĳ�9
				a[i-k]=57;				
				k++;
			}	
			a[i-k]--;
			a[i]=a[i]+10-b[j]+48;
		}
	}
	for(i=0;i<strlen(a);i++)
	{//������λΪ0��λ
		if(i==0&&a[i]==48)
		{
			continue;
		}
		printf("%c",a[i]);
	}
	return 0;
}
