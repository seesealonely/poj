/*
   Description

   7
   3   8
   8   1   0
   2   7   4   4
   4   5   2   6   5

   (Figure 1)

   Figure 1 shows a number triangle. Write a program that calculates the highest sum of numbers passed on a route that starts at the top and ends somewhere on the base. Each step can go either diagonally down to the left or diagonally down to the right.

   Input
   Your program is to read from standard input. The first line contains one integer N: the number of rows in the triangle. The following N lines describe the data of the triangle. The number of rows in the triangle is > 1 but <= 100. The numbers in the triangle, all integers, are between 0 and 99.

   Output
   Your program is to write to standard output. The highest sum is written as an integer.

   Sample Input

   5
   7
   3 8
   8 1 0 
   2 7 4 4
   4 5 2 6 5

   Sample Output

   30
   */

#include"test.h"
#include<vector>
#include<iostream>
using namespace std;
int main()
{
	int num,in;
	cin>>num;
	if(num==0) return 0;
	
	vector<int> line;
	vector<vector<int> > triangle;
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cin>>in;
			line.push_back(in);
		}
		triangle.push_back(line);
		line.resize(0);
	}
	if(!num) return triangle[0][0];
	vector<vector<int> > dp(triangle);
	for(int i=num-2;i>=0;i--)
		for(int j=num-2;j>=0;j--)
			dp[i][j]=max(dp[i+1][j],dp[i+1][j+1])+triangle[i][j];
	cout<<dp[0][0]<<endl;
	return 0;
}
