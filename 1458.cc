//Common Subsequence

#include<iostream>
#include<vector>
#include<string>

using namespace std;
void dp()
{
	string s1,s2;
	cin>>s1>>s2;
	int len1=s1.size(),len2=s2.size();
	vector<vector<int> >dp(len1+1,vector<int>(len2+1,0));
	
	for(int i=0;i<len1;i++)
		for(int j=0;j<len2;j++)
		if(s1[i]==s2[j])
			dp[i+1][j+1]=dp[i][j]+1;
		else
			dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
	cout<<dp[len1][len2]<<endl;
}
int main()
{
	while(1)	
	dp();
	return 0;
}
