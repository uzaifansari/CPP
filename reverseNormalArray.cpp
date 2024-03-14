#include <iostream>
using namespace std;

int main()
{
    int size, arr[size];
    cout << "Enter the length of the array: " << endl;
    cin >> size;
    cout << "Enter the elements of the array of length: " << size << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    cout << "reversed array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}