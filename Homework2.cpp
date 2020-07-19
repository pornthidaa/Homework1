#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name, surname;
    float salary, sale, percent, total; 
    cout<<"Enter Name   : " ;
	cin>>name;
	cin>>surname;
	cout<<"Enter Salary : ";
	cin>>salary;
	cout<<"Enter Sale   : ";
	cin>>sale;
	cout<<"Enter Commission Percent :";
	cin>>percent;
	total = (sale*percent/100)+salary;
	
	cout<<"*******output*******"<<endl;
	cout<<"Your name = " <<name<<" "<<surname<<endl;
	cout<<"Total Revenue "<<total<<" Bath "<<endl;
	return 0;
	//Pornthida Sangangam

}