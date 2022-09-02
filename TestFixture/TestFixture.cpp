#include <iostream>
#include <vector>


class A
{
private:
    int a = 5;
public:
    int getA() const
    {
        return a;
    }
    void setA(int a)
    {
        this->a = a;
    }
    A()
    {};
};

class B
{
public:
    A objA;
    B()
    {
        objA.setA(10);
    }
    
};

int main()
{
    A a;
    std::cout << a.getA() << std::endl;
    B b;
    std::cout << b.objA.getA();

    A x();
    A y;
}
