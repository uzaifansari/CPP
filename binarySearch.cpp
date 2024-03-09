#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
    int size = arr.size();
    // int arr[] = {1, 3, 5, 7, 9, 11, 13};
    // int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout<<"Enter target number: "<<endl;
    cin>>target;

    int leftPart = 0; 
    int rightPart = size - 1;
    int result = -1;

    while (leftPart <= rightPart)
    {
        int mid = leftPart + (rightPart - leftPart) / 2;

        if (arr[mid] == target)
        {
            result = mid;
            break;
        }
        else if (arr[mid] < target)
        {
            leftPart = mid + 1;
        }
        else
        {
            rightPart = mid - 1;
        }
    }

    if (result != -1)
    {
        cout << "Element " << target << " found at index " << result << endl;
    }
    else
    {
        cout << "Element " << target << " not found in the array" << endl;
    }

    return 0;
}
