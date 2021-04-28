#include <iostream>
#include <string>

template <typename T>
void bubbleSort(T a[], int n)
{
    for(int i = 0; i < n -1; i++)
        for(int j = n -1; i < j; j--)
            if(a[j] < a[j - 1])
                std::swap(a[j], a[j - 1]);
}

int main()
{
    int a[] = {10, 50, 30, 100, 20};
    size_t n = sizeof(a)/sizeof(a[0]);

    bubbleSort<int>(a, n);
    for(auto i: a)
        std::cout << i << " " << std::endl;
    std::cout << std::endl;

    std::string str1[] = {"ppp","aaa", "bbb"};
    n = sizeof(str1)/sizeof(str1[0]);

    //bubbleSort<std::string>(str1, n);
    bubbleSort(str1, n);

    for(auto i: str1)
        std::cout << i << " " << std::endl;
    std::cout << std::endl;


}