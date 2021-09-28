#include<bits/stdc++.h>
#include<string.h>
#define CHAR 256
using namespace std;
bool canFormPalindrome(string str)
{
	int count[CHAR]={0};
	for(int i=0;str[i];i++)
	   count[str[i]]++;
	int odd=0;
	for(int i=0;i<CHAR;i++)
	{
		if(count[i]&1)
		  odd++;
		if(odd>1)
		  return false;
	}
	return true;
}
int main()
{
	canFormPalindrome("geeksforgeeks")?cout<<"Yes\n":cout<<"No\n";
	canFormPalindrome("geeksogeeks")?cout<<"Yes\n":cout<<"No\n";
	return 0;
}
