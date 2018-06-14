//Human Gene Functions

#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
int index(char c)
{
	int res=0;
	switch(c)
	{
		case 'A': res=0;break;
		case 'C': res=1;break;
		case 'G': res=2;break;
		case 'T': res=3;break;
		case '-': res=4;break;
	};
	return res;
}
int dp()
{
	int table[5][5]={{5,-1,-2,-1,3},
		{-1,5,-3,-2,-4},
		{-2,-3,5,-2,-2},
		{-1,-2,-2,5,-1},
		{-3,-4,-2,-1,10}};
	int testNums=0,len1=0,len2=0;
	cin>>testNums;
	for(int t=0;t<testNums;t++)
	{
		/*
		scanf("%d%s",len1,s1);
		scanf("%d%s",len2,s2);
		*/
	char s1[101],s2[101];
		cin>>len1>>s1;
		cin>>len2>>s2;	
		vector<vector<int> >dp(len1+1,vector<int>(len2+1,0));
		for(int i=1;i<len1;i++)
			dp[i][0]=dp[i-1][0]+table[index(s1[i-1])][index('-')];	
		for(int i=1;i<len2;i++)
			dp[0][i]=dp[0][i-1]+table[index('-')][index(s2[i-1])];

		for(int i=1;i<len1+1;i++)
			for(int j=1;j<len2+1;j++)
		{
			int temp=max(dp[i-1][j-1]+table[index(s1[i-1])][index(s2[j-1])],dp[i-1][j]+table[index(s1[i-1])][index('-')]);
dp[i][j]=max(temp,dp[i][j-1]+table[index('-')][index(s2[j-1])]);
		}
		cout<<dp[len1][len2]<<endl;
	}	
}

int main()
{
	dp();
	return 0;
}
