#include<iostream>
using namespace std;
struct student 
{
	char emp_name[10];
	char emp_code[10];
	char emp_salary[10];
	char branch[10];
}s1,s2,s3,s4;
int main()
{
	cout<<"220130318016"<<endl;
	cout<<"Vasu sapriya"<<endl;
	cout<<"Enter the emp_name::";
	cin>>s1.emp_name;
	cout<<"Enter the emp_code::";
	cin>>s2.emp_code;
	cout<<"Enter the emp_salary::";
	cin>>s3.emp_salary;
	cout<<"Enter the branch::";
	cin>>s4.branch;
	
	cout<<s1.emp_name<<endl;
	cout<<s2.emp_code<<endl;
	cout<<s3.emp_salary<<endl;
	cout<<s4.branch<<endl;
}
