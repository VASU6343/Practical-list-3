#include<iostream>
using namespace std;
class amount 
{
	private:
			int ACC_NO;
			char BRANCH_CODE[10];
			char BALANCE[10];
	public:
			void get_getchar()
			{
				cout<<"Enter the ACC_NO::";
				cin>>ACC_NO;
				cout<<"Enter the BRANCH_CODE::";
				cin>>BRANCH_CODE;
				cout<<"Enter the BALANCE::";
				cin>>BALANCE;
			}
			void get_display()
			{
				cout<<"Your ACC_NO is::"<<ACC_NO<<endl;
				cout<<"Your BRANCH_CODE is::"<<BRANCH_CODE<<endl;
				cout<<"Your BALANCE is::"<<BALANCE<<endl;
			}
};
int main()
{
	amount a1;
	a1.get_getchar();
	a1.get_display();
	return 0;
}
