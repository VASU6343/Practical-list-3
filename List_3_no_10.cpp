#include<iostream>
using namespace std;
class max
{
	private:
		int no1,no2,no3;
	public:
		void get_detail()
		{
			cout<<"220130318016"<<endl;
			cout<<"Vasu sapariya"<<endl;
			cout<<"Enter the no1::";
			cin>>no1;
			cout<<"Enter the no2::";
			cin>>no2;
			cout<<"Enter the no3::";
			cin>>no3;
		}
		void display_detail()
		{
			if(no1>no2 && no2>no3)
			{
				cout<<"No1 is maximum";
			}
			else 
			{
				if(no2>no3)
				{
					cout<<"No2 is maximum";
				}
				else
				{
					cout<<"No3 is maximum";
				}
			}
		}
}no;
int main()
{
	no.get_detail();
	no.display_detail();
}
