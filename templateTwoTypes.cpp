#include <iostream>

template<typename T, typename U = char>
class A
{
public:
    T x;
    U y;
    
    A()
    {
        std::cout << "Constructor" << std::endl; 
    }

    A(T a, U b): x(a), y(b)
    {
        std::cout << "Constructor: x=" << x << " y=" << y << std::endl; 
    }
};

int main()
{
    A<char> a;
    A<int, int> b(3, 5);
    A<int> c(10, 'a');
}