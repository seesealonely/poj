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
	for(int i=1;i<appleNum+1;i++)
		for(int j=1;j<bowlNum+1;j++)
		if(i>=j)
			dp[i][j]=dp[i][j-1]+dp[i-j][j];
		else
			dp[i][j]=dp[i][i];	
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
