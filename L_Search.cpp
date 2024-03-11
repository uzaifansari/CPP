#include <iostream>
using namespace std;
int main()
{
    int arr[] = {22, 35, 142, 37, 54, 43};
    int n = sizeof(arr) / sizeof(arr[0]);
    int numSearch;
    cout << "Enter the number you want to search: " << endl;
    cin >> numSearch;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == numSearch)
        {
            cout << "The number is at location " << i;
            break;
        }
        else if (i == n)
        {
            cout << "Target not found.";
        }
    }
    return 0;
}
