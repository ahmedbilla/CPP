#include <iostream>

class Base
{
protected:
    std::string type;

public:
    Base() : type("Base")
    {
    }
    virtual void ft()
    {
        std::cout << "type is " << type << " in base" <<std::endl;
    }
};

class Child : public Base
{
    public:
    Child() 
    {
        type = "Child";
    }
    void ft()
    {
        std::cout << "type is " << type << " in Child" << std::endl;
    }
};

int main()
{
    Child b;
    // Base *a = new Child();
    Base *a;
    a = &b;
    a->ft();
}