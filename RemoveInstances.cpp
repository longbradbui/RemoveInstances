#include <iostream>
using namespace std;

template <class T>
bool RemoveInstances1(T array[], int& size, const T& item)
{
    int new_size = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] != item)
        {
            array[new_size++] = array[i];
        }
    }
    size = new_size;
    return true;
}

template <class T>
bool RemoveInstances2(T* array, int& size, const T& item)
{
    int new_size = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(array + i) != item)
        {
            *(array + new_size++) = *(array + i);
        }
    }
    size = new_size;
    return true;
}

int main()
{
    int array[] = { 0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0 };
    int array_size = sizeof(array) / sizeof(array[0]);
    int remove_item = 0;
    cout << "Original Array: " << endl;
    for (int i = 0; i < array_size; i++)
    {
        cout << array[i] << " || ";
    }
    RemoveInstances2(array, array_size, remove_item);
    cout << "\nModified Array: " << endl;
    for (int i = 0; i < array_size; i++)
    {
        cout << array[i] << " || ";
    }
    return 0;
}
