#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    string rev = str;
    reverse(rev.begin(), rev.end());
    if (rev == str)
        cout << "It's a palindrome";
    else
        cout << "It's not a palindrome";
}