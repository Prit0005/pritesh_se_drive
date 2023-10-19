// Write a program of to sort the array using templates.
#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void bubbleSort(T arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int intArray[] = {5, 2, 9, 1, 5, 6};
    int intSize = sizeof(intArray) / sizeof(int);
    std::cout << "Original integer array: ";
    printArray(intArray, intSize);
    bubbleSort(intArray, intSize);
    std::cout << "Sorted integer array: ";
    printArray(intArray, intSize);
    return 0;
}
