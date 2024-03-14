#include <bits/stdc++.h>
using namespace std;

// This program takes an input number and checks if that number can be represented in power of two, for example 8 can be represented as 2^3. 

int main()
{
    int n,i = 1;
    cin>>n;
    while(i<=n) //will run loop until i is equal to n.
    {
        if (pow(2,i)==n) // checks if i^2 is equal to n.
        {
            cout<<"true";
            break;
        }
        else i = i + 1; // increases i by 1.
        if (i == n) // will check if i is equal to n and returns false.
        {
        cout<<"false";
        }
    } 
}
