#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;

    v.assign(5, 10);

    std::cout << "Vector elements: ";
    for(auto i: v)
        std::cout << i << " ";
    std::cout << std::endl;

    // Insert 15 to the lat position
    v.push_back(15);
    std::cout << "The last element is: " << v[v.size() -1];
    std::cout << std::endl;

    // Remove the last element
    v.pop_back();

    // Print the vector
    std::cout << "Vector elements: ";
    for(auto i: v)
        std::cout << i << " ";
    std::cout << std::endl;

    // Insert 5 at the begining
    v.insert(v.begin(), 5);

    std::cout << "The first element is: " << v[0] << std::endl;

    // Remove the first element
    v.erase(v.begin());

    std::cout << "The first element is: " << v[0] << std::endl;

    // Insert at the begining
    v.emplace(v.begin(), 5);
    std::cout << "The first element is: " << v[0] << std::endl;

    // Insert 20 at the end
    v.emplace_back(20);
    std::cout << "The last element is: " << v[v.size() -1];
    std::cout << std::endl;

    // Erase the vector
    v.clear();
    std::cout << "Vector size after clear(): " << v.size() << "\n";

    // Two vectors to perform swap
    std::vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    std::cout << "Vectors: " << std::endl;
    std::cout << "\tVector1: ";
    for(auto i: v1)
        std::cout << i << " ";
    std::cout << std::endl;

    std::cout << "\tVector2: ";
    for(auto i: v2)
        std::cout << i << " ";
    std::cout << std::endl;

    // Swap
    v1.swap(v2);

    std::cout << "Vectors after swap: " << std::endl;
    std::cout << "\tVector1: ";
    for(auto i: v1)
        std::cout << i << " ";
    std::cout << std::endl;

    std::cout << "\tVector2: ";
    for(auto i: v2)
        std::cout << i << " ";
    std::cout << std::endl;

}