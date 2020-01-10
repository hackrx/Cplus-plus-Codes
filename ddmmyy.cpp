#include<iostream>
using namespace std;
#define print(X) (cout<<X)
	void get1()
		{
			int d,m,y;
		cout<<"enter the date/month/year  ";
		cin>>d;
		cin.ignore();
		cin>>m;
		cin.ignore();
		cin>>y;
		while(m>12||m<0||d>31||d<0)
		{
			if(m>12||m<0||d>31||d<0)
			{
				if((m>12||m<0) && (d<=31 && d>0))
				cout<<"Entered month is wrong please try again\n";
			else if((m<=12&&m>0) && (d>31 || d<0))
			cout<<"Input date entered is wrong please try again\n";
			
			else
			cout<<"Wrong input for month and date please try again\n";
			
			}
			
			cout<<"enter the date/month/year again	";
			
			cin>>d;
		cin.ignore();
		cin>>m;
		cin.ignore();
		cin>>y;
		}
		cout<<"Date entered "<<d<<"/"<<m<<"/"<<y<<endl;
			
		}
int main()
{

	
	
		get1();
		
		return 0;
}
