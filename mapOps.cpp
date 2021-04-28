#include <iostream>
#include <map>

template <typename T, typename U>
void printMap(std::map<T, U> m)
{
    T a;
    U b;
    for(auto i: m)
    {
        std::tie(a, b) = i;
        std::cout << a << " " << b << "\t";
    }
    std::cout << std::endl;
}

int main()
{
    // EMpty map conatainer
    std::map<int, int> mp;

    mp.insert(std::pair<int, int>(1, 40));
    mp.insert(std::pair<int, int>(2, 30));
    mp.insert(std::pair<int, int>(3, 60));
    mp.insert(std::pair<int, int>(4, 20));
    mp.insert(std::pair<int, int>(5, 50));
    mp.insert(std::pair<int, int>(6, 50));
    mp.insert(std::pair<int, int>(7, 10));

    std::cout << "Map1: ";
    printMap<int, int>(mp);

    // Assign elements from one map to another
    std::map<int, int> mp2(mp.begin(), mp.end());
    std::cout << "Map2 copied from map1: ";
    printMap<int, int>(mp2);

    // Remove all elements upto element with key 3
    mp2.erase(mp2.begin(), mp2.find(3));
    std::cout << "Map2 after deleting elements upto 3: ";
    printMap<int, int>(mp2);

    // Remove element with key 4
    int num = mp2.erase(4);
    std::cout << "Map2 after deleting element with key 4: ";
    printMap<int, int>(mp2);

    // Lower bound and upper bound for map
    std::cout << "mp.lower_bound(5) : " << mp.lower_bound(5)->first << " " << mp.lower_bound(5)->second << std::endl;
    std::cout << "mp.upper_bound(5) : " << mp.upper_bound(5)->first << " " << mp.upper_bound(5)->second << std::endl;

    return 0;
}