#include <bits/stdc++.h>
using namespace std;

void palindromeNum(int iLimit, int uLimit)
{
    for (int i = iLimit; i < uLimit; i++)
    {
        string str = to_string(i);
        string rev = str;
        reverse(rev.begin(), rev.end());
        if (rev == str)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int iLimit, uLimit;
    cout << "Enter lower limit and upper limit: " << endl;
    cin >> iLimit >> uLimit;
    palindromeNum(iLimit, uLimit);
}

// int main()
// {
//     int l,u;
//     cout<<"Enter lower limit and upper limit: "<<endl;
//     cin>>l>>u;

//     for (int i = l; i < u; i++)
//     {
//         string str = to_string(i);
//         string rev = str;
//         reverse (rev.begin(), rev.end());
//         if (str==rev)
//         {
//             cout<<i<<endl;
//         }
//     }
// }