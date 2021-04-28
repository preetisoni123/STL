#include <iostream>

template <typename T>
T myMax(T x, T y)
{
    return (x > y)? x: y;
}

int main()
{
    std::cout << myMax<int>(3, 5) << std::endl; 
    std::cout << myMax('e', 'h') << std::endl;
}