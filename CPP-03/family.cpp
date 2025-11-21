#include <iostream>

class ahmed
{
private:
    /* data */
public:
    ahmed(/* args */);
    int value = 5;
    ahmed(const ahmed &obj)
    {
        *this = obj;
        std::cout << "ahmed CALLED" << std::endl;
    }
    ~ahmed();
};

ahmed::ahmed(/* args */)
{
}

ahmed::~ahmed()
{
}

class ayour  : public ahmed
{
private:
    /* data */
public:
    ayour(/* args */);
    ayour(const ayour &obj) : ahmed(obj)
    {
        std::cout << "ayour CALLED" << std::endl;
    }
    ~ayour();
};

ayour::ayour(/* args */)
{
}

ayour::~ayour()
{
}


class arinass : public ayour
{
private:
    /* data */
public:
    arinass(/* args */) {}
    arinass(const arinass &obj) : ayour(obj)
    {
        std::cout << "ARINASS CALLED" << std::endl;
    }
    // ahmed()
    ~arinass() {}
};

int main()
{
    ahmed family;
    arinass bon_chien(family); 
}