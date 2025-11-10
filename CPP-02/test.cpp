#include <iostream>


class test
{
    private:
    public:
        int a;
        test(int s){
            a = s;
        };
        test(const test &other)
        {
            a = other.a;
        }
};
int main()
{
    // int a = 5;
    test copy(4);
    test obj(copy);
    std::cout << obj.a;

}