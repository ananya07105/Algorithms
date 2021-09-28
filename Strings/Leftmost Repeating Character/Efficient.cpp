#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
const int CHAR=256;
int leftMost(string str)
{
	int fIndex[CHAR];
	fill(fIndex,fIndex+CHAR,-1);
	int res=INT_MAX;
	for(int i=0;i<str.length();i++)
	{
		if(fIndex[str[i]]==-1)
		  fIndex[str[i]]=i;
		else
		  res=min(res,fIndex[str[i]]);
	}
	return (res==INT_MAX)?-1:res;
}
int main()
{
	string str="geeksforgeeks";
	int ans=leftMost(str);
	cout<<"The index of leftmost repeating character is:"<<ans;
}
