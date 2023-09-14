#include<iostream>
using namespace std;
struct student
{
	char name[10];
	int std;
	float per;

}s1,s2,s3;
int main()
{	
		cout<<"Enter the name::";
		cin>>s1.name;
		cout<<"Enter the std::";
		cin>>s2.std;
		cout<<"Enter the percentege::";
		cin>>s3.per;
		
		cout<<s1.name<<endl;
		cout<<s2.std<<endl;
		cout<<s3.per<<endl;
		return 0;
}
