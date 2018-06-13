//Cow Bowling

#include<iostream>
#include<vector>

using namespace std;

int dp(vector<vector<int> > &input)
{
	int lastpos=input.size()-1;
	vector<vector<int> > dp(input);
	for(int i=lastpos-1;i>-1;i--)
		for(int j=0;j<i+1;j++)
		dp[i][j]=max(dp[i+1][j],dp[i+1][j+1])+input[i][j];
	return dp[0][0];
}

int main()
{
	int num=0;
	cin>>num;
	vector<vector<int > > input(num,vector<int>(num,0));
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<i+1;j++)
		cin>>input[i][j];	
	}
	cout<<dp(input)<<endl;
	return 0;
}
