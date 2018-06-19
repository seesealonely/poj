//Charm Bracelet

#include<iostream>
#include<vector>

using namespace std;

void dp()
{
	int num=0,maxfactor=0;
	cin>>num>>maxfactor;
	int weight=0,factor=0;
	while(num--)
	cin>>weight>>factor;
	vector<vector<int> > dp(num+1,vector<int>(maxfactor+1,0));
	for(int i=0;i<num;i++)
		for(int j=0;j<maxfactor;j)
		if(maxfactor-factor[i]-dp[i-1][j-1])
			dp[i][j]=
			
}
