#include <iostream>
#include <list>
#include <iterator>

// Function to show list
void showList(std::list<int> l)
{
    //std::list<int>::iterator it;
    for(auto i: l)
        std::cout << i << " ";
    std::cout << std::endl;
}

int main()
{
    std::list<int> list1, list2;

    for(int i = 0; i < 10; i++)
    {
        list1.push_back(i * 2);
        list2.push_back(i * 3);
    }

    std::cout << "List 1: ";
    showList(list1);

    std::cout << "List 2: ";
    showList(list2);

    std::cout << "list1.front(): " << list1.front() << std::endl;
    std::cout << "list1.back(): " << list1.back() << std::endl;

    std::cout << "list1.pop_front(): ";
    list1.pop_front();
    showList(list1);

    std::cout << "list2.pop_back(): ";
    list2.pop_back();
    showList(list2);

    std::cout << "list1.reverse(): ";
    list1.reverse();
    showList(list1);

    std::cout << "list2.sort(): ";
    list2.sort();
    showList(list2);

    return 0;
}