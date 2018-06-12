//Palindrome
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int dfs(string s,vector<vector<int> > &d,int left,int right)
{
	if(left>=right) return 0;
	if(d[left][right]!=0) return d[left][right];
	if(s[left]==s[right])
	return	dfs(s,d,left+1,right-1);
	else
	return 	min(dfs(s,d,left,right-1),dfs(s,d,left+1,right))+1;
}

int dp(string s,vector<vector<int> > &dp,int left,int right)
{
	for(int i=left;i<=right;i++)
		for(int j=right;i>=left;j--)
		if(s[i]==s[j]) dp[i][j]=dp[i+1][j-1];
		else
			dp[i][j]=min(dp[i+1][j],dp[i][j-1])+1;
	return dp[0][right-1];
}
int main()
{
	int len=0;string s;
	cin>>len>>s;
	vector<vector<int> > d(len,vector<int> (len,0));
	//cout<<dfs(s,d,0,s.size()-1)<<endl;
	cout<<dp(s,d,0,s.size()-1)<<endl;
	return 0;
}
