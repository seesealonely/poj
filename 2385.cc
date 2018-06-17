//Apple Catching

#include<iostream>
#include<vector>

using namespace std;

void dp()
{
	int t=0,w=0,res;
	cin>>t>>w;
	vector<int> testCase(t);
	for(int i=0;i<t;i++) cin>>testCase[i];
	vector<vector<int> > dp(t,vector<int>(w,0));
	for(int i=0;i<w;i++)
	 dp[0][i]=(testCase[0]==i%2+1);
	for(int i=1;i<t;i++)
	{
		for(int j=0;j<w;j++)
		{
			if(j)dp[i][j]=max(dp[i-1][j]+(testCase[i]==j+1%2),dp[i-1][j-1]+(testCase[i]==j+1%2));
			else dp[i][j]=dp[i-1][j]+testCase[i]%2;
		}
	}
	for(int i=0;i<w;i++)
		res=max(res,dp[t-1][i]);	
	cout<<res<<endl;
}

int main()
{
	dp();
	return 0;
}
