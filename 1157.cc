//LITTLE SHOP OF FLOWERS
// dp
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int origin()
{
	int flowers=0,vases=0;
	cin>>flowers>>vases;
	vector<vector<int> >  value(flowers+1,vector<int>(vases+1,INT_MIN));
	vector<vector<int> >  dp(flowers+1,vector<int>(vases+1,INT_MIN));
	for(int i=1;i<flowers+1;i++)
		for(int j=1;j<vases+1;j++)
			cin>>value[i][j];
	for(int i=0;i<flowers+1;i++)
		dp[i][0]=dp[i][i]=0;

	for(int i=1;i<flowers+1;i++)
		dp[i][i]+=dp[i-1][i-1]+value[i][i];

	for(int i=1;i<flowers+1;i++)
		for(int j=i+1;j<vases+1;j++)
			dp[i][j]=max(dp[i-1][j-1]+value[i][j],dp[i][j-1]);
	return dp[flowers][vases];
}
int main()
{
	cout<<origin()<<endl;
	return 0;
}
