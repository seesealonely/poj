//World Cup Noise

#include<iostream>
#include<vector>

using namespace std;

void dp(int i)
{
	int bitNum=0;
	cin>>bitNum;
	vector<vector<int> > dp(bitNum,vector<int>(2,0));
	dp[0][0]=dp[0][1]=1;
	for(int i=1;i<bitNum;i++)
	{
		dp[i][0]=dp[i-1][0]+dp[i-1][1];	
		dp[i][1]=dp[i-1][0];
	}
	cout<<"Scenario #"<<i<<":"<<endl;
	cout<< dp[bitNum-1][0]+dp[bitNum-1][1]<<endl;;
	cout<<endl;
}
int main()
{
	int testNum=0;
	cin>>testNum;
	for(int i=1;i<testNum+1;i++)
	{
	dp(i);
	}
	return 0;
}
