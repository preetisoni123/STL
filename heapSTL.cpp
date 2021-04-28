#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> v1 = {20, 30, 40, 25, 45};

    // Converting vector into heap using make_heap
    make_heap(v1.begin(), v1.end());

    // Display the maximum element using front
    std::cout << "The maximum elemnet: ";
    std::cout << v1.front() << std::endl;

    // push_heap(): Insert elements into heap. 
    // New element is placed at the appropriate palce.
    // pop_heap(): Delete the maximum element
    v1.push_back(50);
    // Rearrange into heap
    std::push_heap(v1.begin(), v1.end());

    std::cout << "The maximum elemnet after push: ";
    std::cout << v1.front() << std::endl;

    // pop_heap: Delete max element
    pop_heap(v1.begin(), v1.end());
    v1.pop_back();

    std::cout << "The maximum elemnet after pop: ";
    std::cout << v1.front() << std::endl;

    // sort_heap(): Sort the heap. 
    // After this container is no longer heap.

    auto printHeap = [&](){
        std::cout << "Elemnets in the heap: ";
        for(auto i: v1)
            std::cout << i << " ";
        std::cout << std::endl;
    };
    printHeap();
    std::sort_heap(v1.begin(), v1.end());
    std::cout << "After sort_heap "; 
    printHeap();

    // is_heap(): Check container is heap
    std::is_heap(v1.begin(), v1.end())? 
    std::cout << "The containner is heap":
    std::cout << "The container is NOT heap";
    std::cout << std::endl;

    // is_heap_until: upto point container is heap
    auto it = std::is_heap_until(v1.begin(), v1.end());
    for(auto it1 = v1.begin(); it1 != it; it1++)
        std::cout << *it1 << " ";
    std::cout << std::endl;

    return 0;
}