#include<iostream>
using namespace std;

class Demo{
private:
	int x;int y;
	public:
		Demo(){}
	Demo(const Demo &o1)
	{
		cout<<"Copy constructor called";
	}
	Demo& operator = (const Demo &o1)
	{
		cout<<"Assignment operator is called";
		return *this;
	}


};

int main()
{
	Demo o1,o2;
	o2=o1;
	Demo o3=o1;
	getchar();
	return 0;
}