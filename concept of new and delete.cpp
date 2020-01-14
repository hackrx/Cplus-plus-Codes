#include<iostream>
using namespace std;
class student
{
	int x;
	public:
		student()
		{
			cout<<"Cons is running0"<<endl;
			
		}
		~student()
		{
			cout<<"dest is running "<<endl;
		}
		void get()
		{
			cout<<"Enter the value "<<endl;
			cin>>x;
		}
		void show()
		{
			cout<<"The value of x is "<<endl;
			cout<<x<<endl;
		}
};
int main()
{
	student *s1;	//pointer of a student object data type
	s1=new student;		
	cout<<"Hiii!\n";
	s1->get();
	s1->show();
		delete s1;
		return 0;
}