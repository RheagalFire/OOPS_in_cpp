#include<iostream>
using namespace std;
class x{
public:
	int z;
	static void f()
	{
		//static function can only acess static datamembers and functions

	}
	void fun() const
{
	//makes variable constant , function can not be redefined.

}
//friend function
friend void fun_t();
};
void fun_t()
{
	//friend function are made to give private acess to non class functions.
	//Member function of other class can also be made a friend of some other class.

	x o1;
	o1.z=10;
}

int main()
{
	x::f();// using scope resolutor to call or define a function inside a class.
	
}