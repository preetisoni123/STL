#include <iostream>

// Add num: Need one argument function to end it.
template<typename T>
T add_num(const T& arg)
{
    return arg;
}


template <typename T, typename... Types>
T add_num(const T& var1, const Types&... var2)
{

    return var1 + add_num(var2...);
}
/////////////////////////////////////////////

// Pair compairer: Works in pairs(even number of arguments) only. To end needs empty function.
// To work with odd number of arguments, need one argument function.
template<typename T>
bool pair_compairer(T a)
{
    return false;
}

bool pair_compairer()
{
    return true;
}

template<typename T, typename... Args>
bool pair_compairer(T a, T b, Args... args)
{
    return a == b && pair_compairer(args...);
}
////////////////////////////////////////////////

// Print example: Need empty function to end the variadic function
void print()
{

    std::cout << std::endl << "Empty function, called at the end" << std::endl;
}

template <typename T, typename... Types>
void print(T var1, Types... var2)
{
    std::cout << var1 << " "; 
    print(var2...);
}

int main()
{
    print(1, 2, 3.14, "Any number of "
    "arguments passed",
    "I will print it");

    std::cout << "pair_compairer(1.5, 1.5, 2, 2, 3): " << pair_compairer(1.5, 1.5, 2, 2, 3) << std::endl;
    std::cout << "pair_compairer(1.5, 1.5, 2, 2): " << pair_compairer(1.5, 1.5, 2, 2) << std::endl;
    std::cout << std::endl << "Sum of 4, 5, 6, 7: ";
    auto num = add_num(4, 5, 6, 7);
    std::cout << num << std::endl; 
}