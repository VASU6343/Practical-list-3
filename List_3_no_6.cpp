#include<iostream>
using namespace std;
class shape
{
	private:
		float height,base;
		
	public:
		void get_shape();
		void put_shape();
};
		void shape::get_shape()
		{
      cout<<"220130318016";
      cout<<"Vasu sapariya";
			cout<<"Enter the height::";
			cin>>height;
			cout<<"Enter the base::";
			cin>>base;
		}
		void shape::put_shape() 
		{
        cout <<endl<< "height: " << height <<endl;
        cout << "base: " << base <<endl;
        cout <<endl<<height<<"*"<<base<<endl;
    	}
int main()
{
		shape s;
		s.get_shape();
		s.put_shape();	
}
