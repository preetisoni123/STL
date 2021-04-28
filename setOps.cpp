#include <iostream>
#include <set>

template<typename T>
void printSet(T t)
{
    std::cout << "Set: ";
    for(auto i: t)
        std::cout << i << " ";
    std::cout << std::endl;
};


int main()
{
    std::set<int, std::greater<int> > s1;

    // Insert elements in random order
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);

    // Only one 50 will be added to the set
    s1.insert(50);
    s1.insert(10);

    // Print set
/*    template<typename T>
    auto printSet = [](T t){
        std::cout << "Set: ";
        for(auto i: t)
            std::cout << i << " ";
        std::cout << std::endl;
    };
*/
    //printSet<std::set<int, std::greater<int> > >(s1);
    printSet(s1);

    // Assigning the elements from s1 to s2
    std::set<int> s2(s1.begin(), s1.end());
    //printSet<std::set<int>>(s2);
    printSet(s2);

    // Remove all elements up to 30 in s2
    std::cout << "After removing elements less than 30"<< std::endl;
    s2.erase(s2.begin(), s2.find(30));
    //printSet<std::set<int>>(s2);
    printSet(s2);

    // Remove element with value 50 in s2
    int num;
    num = s2.erase(50);
    std::cout << "Erase 50: "<< num << " removed" << std::endl;

    //printSet<std::set<int>>(s2);
    printSet(s2);

    // Lower bound and upper bound for set s1
    std::cout << "s1.lower_bound(40) : " << *s1.lower_bound(40) << std::endl;
    std::cout << "s1.upper(40) : " << *s1.upper_bound(40) << std::endl;

    // Lower bound and upper bound for set s2
    std::cout << "s2.lower_bound(40) : " << *s2.lower_bound(40) << std::endl;
    std::cout << "s2.upper(40) : " << *s2.upper_bound(40) << std::endl;
    return 0;
}