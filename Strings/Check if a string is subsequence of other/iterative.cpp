#include<iostream>
#include<string.h>
using namespace std;
bool isSubSeq(char s1[], char s2[],int m,int n)
{
	int j=0;
	for(int i=0;i<m&&j<n;i++)
	{
		if(s1[i]==s2[j])
		  j++;
	}
	return (j==n);
}
int main()
{
	char s1[]="ABCDEF";
	char s2[]="ADE";
	int m=strlen(s1);
	int n=strlen(s2);
	isSubSeq(s1,s2,m,n)?cout<<"Yes, s2 is a subsequence of s1":cout<<"No, s2 is not a subsequence of s1";
}
