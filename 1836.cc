//Alignment

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int LIS(vector<double> &nums)
{
	int maxLen=0,curLen=0,numsLen=nums.size();
	vector<double> dp(numsLen+1,0.0);
	for(int i=1;i<=nums.size();i++)
	{
		if(dp[i-1]+nums[i]>nums[i])
		{
		curLen++;
		dp[i]=dp[i-1]+nums[i];
		}
		else
		{
			 dp[i]=nums[i];
		curLen=0;
		}
		if(curLen>maxLen) maxLen=curLen;
	}
	return maxLen;
}

int main()
{
	int num;
	cin>>num;
	vector<double> input(num,0.0);
	for(int i=0;i<num;i++)
	cin>>input[i];
	int up=0,down=0;
	up=LIS(input);
	reverse(input.begin(),input.end());
	down=LIS(input);
	int res=up>down?up:down;
	cout<<res<<endl;
	return 0;
}
