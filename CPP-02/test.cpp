#include <iostream>

// class A
// {
//     private:
//         int a;
//     public:
//         A(int num)
//         {
//             a = num;
//         }
// };

// class B
// {
//     private:
//         int b;
//     public:
//         B(int num)
//         {
//             b = num;
//         }
// };

// class C
// {
//     private:
//         int c;
//     public:
//         C(int num)
//         {
//             c = num;
//         }
// };

// class D
// {
//     private:
//         int d;
//     public:
//         D(int num)
//         {
//             d = num;
//         }


//         D ()
//         void ft()
//         {
//             std::cout << d;
//         }
// };

// int main()
// {
//     A a(1);
//     B b(2);
//     C c(3);
//     D d = a + b + c;
//     d.ft();
// }

class A {
public:
    int value;
    A(int v) : value(v) {}
};

class B {
public:
    int value;
    B(int v) : value(v) {}
};

class C {
public:
    int value;
    C(int v) : value(v) {}
};

class D {
public:
    int value;
    D(int v) : value(v) {}
};

// overload operator+
D operator+(const A& a, const B& b) {
    return D(a.value + b.value);
}

D operator+(const D& d, const C& c) {
    return D(d.value + c.value);
}

int main() {
    A a(1);
    B b(2);
    C c(3);

    D d = a + b + c; // هنا أولاً a+b => D ثم D+c => D
    std::cout << d.value << std::endl; // 6
}