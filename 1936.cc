//All in All

#include<iostream>
#include<vector>
#include<string>

using namespace std;

void solve()
{
	string s,t;
	cin>>s>>t;
	int slen=s.size(),tlen=t.size();
	if(slen>t.size()) cout<<"No"<<endl;
	int j=0;
	for(int i=0;i<tlen;i++)
	if(s[j]==t[i]) j++;	
	if(j==slen) 
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
}
int main()
{
	while(true)
	solve();
}
