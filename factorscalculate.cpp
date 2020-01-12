#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t=1;
	while(t==1)
	{
	
    int number, temp = 1;
 
    cout << "Enter the number to determine its factors : " << endl;
    cin >> number;
    cout << "The factors of " << number << " are : " << endl;
    while (temp <= number)
    {
        if (not(number % temp))
            cout << temp << " ";
 
        temp++;
    }
    cout << endl;
    cout<<"Enter 1 to calculate another or press another key ";
    cin>>t;
}
}
