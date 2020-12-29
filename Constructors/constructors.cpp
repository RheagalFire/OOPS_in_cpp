#include<bits/stdc++.h>
using namespace std; 

//A constructor is a member function of a class which initializes objects of a class. 
//In C++, Constructor is automatically called when object(instance of class) create. It is special member function of the class

class demo{
	private:
		int x,y;
	public:
		demo(int x1,int y1)
		{
			x=x1;
			y=y1;

		}
		void get_x_and_y()
		{
			cout<<x<<" "<<y;
			
		}
	};
int main()
{
	demo d1(1,2);
	d1.get_x_and_y();

	return 0;
}