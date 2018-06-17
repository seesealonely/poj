#include<iostream>
#include<vector>
using namespace std;
int origin(string &input)
{
	int len=input.size();
	vector<int> dp(len+1,0);	
	dp[0]=1;
	dp[1]=input[1]!=0?1:0;
	for(int i=2;i<=input.size();i++)
	{
		if((input[i-2]=='1'||input[i-2]=='2')&&(input[i-1]<='6'&&input[i-1]>='1')) 
		dp[i]=dp[i-1]+dp[i-2];	
		else
			if(input[i]!='0') dp[i]=dp[i-1];
			else dp[i]=dp[i-2];
	}
	return	dp[len];
}

int main()
{
	string input;
	for(;true;)
	{
		cin>>input;
		if(input=="0") break;
		cout<<origin(input)<<endl;
		input.clear();
	}
	return 0;
}
