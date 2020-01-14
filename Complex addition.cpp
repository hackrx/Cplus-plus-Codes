// Adding Two Complex Numbers
// Function call by passing pbject and returning object
// Enter the input in the form of eg. 2+3i i.e you can enter + and i also code will ignore it.
#include<iostream>
using namespace std;
class complex
{
	int rel,img;
	public:
		void get(int a,int b)
		{
			rel=a;
			img=b;
		}
		void get1()
		{
			cout<<"Enter the compex number "<<endl;
			cin>>rel;
			cin.ignore();	//this code will ignore + entry(input)
			cin>>img;
			cin.ignore();	//this code will ignore i input
			
		}
		complex Add(complex c1)
		{
			rel=rel+c1.rel;
			img=img+c1.img;
			return *this;
		}
		void show()
		{
			cout<<"Added Complex number is "<<endl;
			cout<<rel<<"+"<<img<<"i"<<endl;
		}
};
int main()
{
	complex c1,c2,c3;
	c1.get1();
	c2.get1();
	c3=c1.Add(c2);
	c3.show();
	return 0;
}