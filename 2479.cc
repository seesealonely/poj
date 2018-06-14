//Maximum sum

#include<iostream>
#include<cstdio>
#include<climits>
#include<vector>

using namespace std;

void dp()
{
	int testNum=0,caseNum=0;
		scanf("%d",&testNum);
	for(int t=0;t<testNum;t++)
	{
		scanf("%d",&caseNum);
		vector<int> Case(caseNum+1,0);
		for(int i=1;i<=caseNum;i++)
		scanf("%d",&Case[i]);
		
		vector<int> dp(caseNum+1,0);
		dp[0]=INT_MIN;
		for(int i=1;i<=caseNum;i++)
		if(dp[i-1]>0)
		dp[i]=dp[i-1]+Case[i];
		else dp[i]=Case[i];
		for(int i=1;i<=caseNum;i++)
		if(dp[i-1]>dp[i]) dp[i]=dp[i-1];
	
		vector<int> reversedp(caseNum+2,0);
		reversedp[caseNum+1]=INT_MIN;
		for(int i=caseNum;i>0;i--)
		if(reversedp[i+1]>0)
		reversedp[i]=reversedp[i+1]+Case[i];
		else reversedp[i]=Case[i];
		for(int i=caseNum;i>0;i--)
		if(reversedp[i+1]>reversedp[i]) reversedp[i]=reversedp[i+1];

		int res=INT_MIN;
		for(int i=1;i<caseNum;i++)
		if(dp[i]+reversedp[i+1]>res)
		res=dp[i]+reversedp[i+1];
		
		cout<<res<<endl;
	}	
}

int main()
{
	dp();
	return 0;
}
