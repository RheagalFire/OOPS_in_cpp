#include<iostream>
using namespace std;
//A copy constructor is a member function which initializes an object using another object of the same class.
class A{
private:
	int x;int y;
public:
	A(int x1,int y1)
	{
		x=x1;y=y1;
	}
	A(const A &o2)
	{
		x=o2.x;
		y=o2.y;
	}
	int getx()
	{
		return x;
	}
};
int main()
{
	A o1(10,20);
	A o2=o1;
	cout<<o1.getx()<<'\n'<<o2.getx();
}