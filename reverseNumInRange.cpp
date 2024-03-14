// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, ans = 0;
//     cin >> n;
//     while (n != 0)
//     {
//         int digit = n % 10;
//         if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
//         {
//             cout << "0";
//             break;
//         }

//         ans = (ans * 10) + digit;
//         n = n / 10;
//     }
//     cout << ans;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    while (n != 0)
    {
        int digit = n % 10;
        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7) || ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8))
        {
            cout << "0";
            return 0; // Exit the program
        }
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout << ans;
    return 0;
}
