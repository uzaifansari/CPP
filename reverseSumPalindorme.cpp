#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,rem=0,rev=0;
    cout<<"enter the number: "<<endl;
    cin>>n;
    int dup = n;
    for (int i = 0; i < 4; i++)
    {
        rem = dup%10;
        dup = dup/10;
        rev = (rev*10) + rem;
    }
    int sum = n+rev;
    string s = to_string(sum);
    string r = s;
    reverse(r.begin(), r.end());
    if (s==r)
    {
        cout<<"sum is a palindrome number.";        
    }
    else
       cout<<"sum is not a palindrome number";
}  