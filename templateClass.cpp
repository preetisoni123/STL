#include <iostream>
template <typename T>
class Array 
{
private:
    T *ptr;
    size_t size;
public:
    Array(T arr[], size_t s);
    void print();
};

template <typename T>
Array<T>::Array(T arr[], size_t s)
{
    ptr = new T[s];
    size = s;

    for(int i = 0; i < size; i++)
        ptr[i] = arr[i];
}

template <typename T>
void Array<T>::print()
{
    for(int i = 0; i < size; i++)
        std::cout << " " << *(ptr + i);
    std::cout << std::endl;
}

int main()
{
    int arr[5] = {1, 3, 2, 5, 6};
    Array<int> a(arr, 5);
    a.print();

    return 0;
}