#include <iostream>
#include <deque>

int main()
{
    std::deque<int> que;
    que.push_back(10);
    que.push_front(20);
    que.push_back(30);
    que.push_front(15);
    
    auto showQueue = [&]()
    {
        for(auto i: que)
            std::cout << i << " ";
        std::cout << std::endl;
    };
    std::cout << "Double ended Queue: ";
    showQueue();

    std::cout << "que.size(): " << que.size() << std::endl;
    std::cout << "que.max_size(): " << que.max_size() << std::endl;
    std::cout << "que.at(2): " << que.at(2) << std::endl;
    std::cout << "que.front(): " << que.front() << std::endl;
    std::cout << "que.back(): " << que.back() << std::endl;
    std::cout << "que.pop_front()" << std::endl;
    que.pop_front();

    std::cout << "Double ended Queue: ";
    showQueue();

    std::cout << "que.pop_back()" << std::endl;
    que.pop_back();

    std::cout << "Double ended Queue: ";
    showQueue();


}