//AGTC

#include<iostream>
#include<vector>

using namespace std;

void dp()
{
	int slen=0,dlen=0;
	string src,dst;
	cin>>slen>>src;
	cin>>dlen>>dst;
	vector<vector<int> >dp(slen+1,vector<int>(dlen+1,0));
	for(int i=1;i<slen+1;i++)
	dp[i][0]=i;
	for(int i=1;i<dlen+1;i++)
	dp[0][i]=i;
	for(int i=1;i<slen+1;i++)
		for(int j=1;j<dlen+1;j++)
		dp[i][j]=min(dp[i-1][j-1]+(src[i]==dst[j]?0:1),min(dp[i-1][j],dp[i][j-1])+1);
	cout<<dp[slen][dlen]<<endl;
}

int main()
{
	dp();
	return 0;
}
