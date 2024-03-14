//To return the sum of the second largest element of EVEN position and second smallest element of odd position of the array arr.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int length;
    cout << "Enter the length of the array: " << endl;
    cin >> length;
    if (length < 4)
    {
        cout << "0";
    }
    else
    {
        arr.resize(length);
        cout << "Enter the array of length " << length << " :" << endl;

        int firstEven = INT_MIN, firstOdd = INT_MAX;
        int secondEven = INT_MIN, secondOdd = INT_MAX;

        for (int i = 0; i < length; ++i)
        {
            cin >> arr[i];
            if (i % 2 == 0)
            {
                if (arr[i] > firstEven)
                {
                    secondEven = firstEven;
                    firstEven = arr[i];
                }
                else if (arr[i] > secondEven)
                    secondEven = arr[i];
            }
            else
            {
                if (arr[i] < firstOdd)
                {
                    secondOdd = firstOdd;
                    firstOdd = arr[i];
                }
                else if (arr[i] < secondOdd)
                {
                    secondOdd = arr[i];
                }
            }
        }
        int sum = secondEven + secondOdd;
        cout << sum;
    }
}