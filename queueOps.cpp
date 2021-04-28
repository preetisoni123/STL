#include <iostream>
#include <queue>

int main()
{
    std::queue<int> que1;
    que1.push(10);
    que1.push(20);
    que1.push(30);

    auto showQueue = [=](){
    std::cout << "Queue is: ";
    while(!que1.empty())
    {
        std::cout << "\t" << que1.front();
        que1.pop(); 
    }

    };

}