#include <iostream>


class a
{
    protected:
        int val;
    public:
        a() : val(5)
        {

        }
        void ft()
        {
            std::cout << val << std::endl;
        }
};
class b : protected a
{
    public:
        b() : a()
        {
            val = 7;
        }
};
int main()
{
    b obj;
    // obj.ft();
}