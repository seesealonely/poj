#include<vector>
#include<iostream>
using  namespace std;
void show(vector<vector<int> > &v)
{
	for(int i=0;i<v.size();i++)
	{
	for(int j=0;j<v.size();j++)
		cout<<v[i][j]<<" ";
		cout<<endl;
	}
}
