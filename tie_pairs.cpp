#include <utility>
#include <iostream>
#include <tuple>

int main()
{
    std::pair<int, int> pair1 = {1, 2};
    int a, b;
    std::tie(a, b) = pair1;
    std::cout << a << " " << b << std::endl;

    std::pair<int, int> pair2 = {3, 4};
    std::tie(a, std::ignore) = pair2;

    // print old value of b
    std::cout << a << " " << b << std::endl;

    // pair of pairs
    std::pair<int, std::pair<int, char> > pair3 = {3, {4, 'a'}};
    int x, y;
    char z;
    // std::tie(x, y, z) = pair3; // Error
    //std::tie(x, std::tie(y, z)) = pair3; // Error
    x = pair3.first;
    std::tie(y, z) = pair3.second;
    std::cout << x << " " << y << " " << z << std::endl;

    std::pair<int, int> pair4;
    std::cout << pair4.first << " *** " << pair4.second << std::endl;




}