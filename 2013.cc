//Symmetric 

#include<iostream>
#include<vector>
#include<stack>

using namespace std;

void useStack(int stringNum)
{
	string s;
	stack<string> st;
	for(int i=0;i<stringNum;i++)
	{
	cin>>s;
	if(i%2) st.push(s);
	else	cout<<s<<endl;
	}
	while(!st.empty())
	{
	cout<<st.top()<<endl;
	st.pop();
	}
}
void recursive(int num)
{
}
int main()
{
	int n=0,i=1;
	for(;cin>>n&&n;)
	{
	cout<<"SET "<<i++<<endl;
	useStack(n);
	}
	return 0;
}
