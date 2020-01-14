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
	s1=new student;		//It will call the constructor
	cout<<"Hiii!\n";
	s1->get();		//calling the get() fun. with pointer s1
	s1->show();
		delete s1;	//deleting the student object
		return 0;
}
