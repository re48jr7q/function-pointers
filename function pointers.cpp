#include <iostream>
#include <utility>

void selectionSort(int* array, int size, bool (*comparisonFcn)(int, int))
{
    for (int startIndex{ 0 }; startIndex < (size - 1); ++startIndex)
    {
        int smallestIndex{ startIndex };

        for (int currentIndex{ startIndex + 1 }; currentIndex < size; ++currentIndex)
        {
            if (ascending(array[smallestIndex], array[currentIndex]))//comparison done here
            {
                smallestIndex = currentIndex;
            }
        }
        std::swap(array[startIndex], array[smallestIndex]);
    }
}
bool ascending(int x, int y)
{
    return x > y;
}
bool decending(int x, int y)
{
    return x < y;
}
void printArray(int* array, int size)
{
    for (int index{ 0 }; index < size; ++index)
    {
        std::cout << array[index] << ' ';
    }
    std::cout << '\n';
}

int main()
{
  

    return 0;
}

