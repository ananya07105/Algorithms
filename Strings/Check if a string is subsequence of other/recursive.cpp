#include<iostream>
#include<string.h>
using namespace std;
bool isSubSeq(const string &s1, const string &s2,int m,int n)
{
	if(n==0)
	  return true;
	if(m==0)
	  return false;
	if(s1[m-1]==s2[n-1])
	  return isSubSeq(s1,s2,m-1,n-1);
	else
	  return isSubSeq(s1,s2,m-1,n);
}
int main()
{
	string s1="ABCDEF";
	string s2="ADE";
	int m=s1.length();
	int n=s2.length();
	isSubSeq(s1,s2,m,n)?cout<<"Yes, s2 is a subsequence of s1":cout<<"No, s2 is not a subsequence of s1";
}
