#include<iostream>
using namespace std;
class product
{
	private:
		int id;
		char name[100];
		float price;
		
	public:
		void get_getchar()
		{
      cout<<"220130318016";
      cout<<"Vasu Sapariya":
			cout<<"Enter the Product_id::";
			cin>>id;
			cout<<"Enter the Product_name::";
			cin>>name;
			cout<<"Enter the Product_price::";
			cin>>price;
		}
		void get_display()
		{
			cout<<"Product_id is::"<<id<<endl;
			cout<<"Product_name is::"<<name<<endl;
			cout<<"Product_price is::"<<price<<endl;
		}
};
int main()
{
	product obj;
	product obj2;
	obj.get_getchar();
	obj.get_display();
	obj2.get_getchar();
	obj2.get_display();
}
