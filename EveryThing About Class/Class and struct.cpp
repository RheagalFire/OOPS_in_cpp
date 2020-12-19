#include<iostream>
using namespace std;
class A{
    int x; //private member function x
    public:
    int y;
};
struct B{
    int x;
}
class Derived : A{};
struct Derived2: A{};
int main()
{
    A a;
    B b;
    a.x=10;// Will Throw a compiler Error
    b.x=10;//will work fine
    Derived d;
    d.y=20;//Will Throw a compiler Error
    Derived2 d1;
    d1.y=20;//will work fine
    return 0;
}