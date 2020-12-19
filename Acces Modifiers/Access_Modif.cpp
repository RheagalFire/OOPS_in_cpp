#include<iostream>
using namespace std;
class Base{
    int x;//by default private
    public:
    int y;
    protected:
    int z;
};
class Derived : public Base{
    void set_z(int z)
    {
        protec_z=z;
    }
}

int main()
{
    Base o1;
    o1.x=10;//can't be acessed
    o1.y=10;//won't throw a compilation error
    o1.z=10;//can't be acessed
    Derived o2;
    o2.set_z(10)// won't throw an error

}
// Private vs protected difference is that the protected members can be accesed through Derived classes.

