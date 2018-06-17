//put apple

#include<iostream>
#include<vector>

using namespace std;

void dp()
{
	int appleNum,bowlNum;
	cin>>appleNum>>bowlNum;
	if(appleNum<bowlNum)
	bowlNum=appleNum;
	vector<vector<int> > dp(appleNum+1,vector<int>(bowlNum+1,0));
	for(int i=0;i<appleNum+1;i++)
	dp[i][0]=dp[i][1]=1;
	
	for(int i=0;i<bowlNum+1;i++)
	dp[1][i]=dp[0][i]=1;;
	for(int i=2;i<appleNum+1;i++)
		for(int j=2;j<bowlNum+1;j++)
		if(i>=j)
			dp[i][j]=dp[i][j-1]+dp[i-j][j];
		else dp[i][j]=dp[i][i];
	
	cout<<dp[appleNum][bowlNum]<<endl;	
}

int main()
{
	int testCase=0;
	cin>>testCase;
	while(testCase--)
	dp();
	return 0;
}
