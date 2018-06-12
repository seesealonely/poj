//hangover

#include<iostream>

using namespace std;

int main()
{
	int 	cardnumber=2;
	float input=0.0,sum=0.0;
	while(cin>>input&&input)
	{
		for(;sum<input;cardnumber++)
			sum+=(float)1/cardnumber;
		cout<<cardnumber-2<<" card(s)"<<endl;
		sum=0.0;
		cardnumber=2;
	}
	return 0;
}
