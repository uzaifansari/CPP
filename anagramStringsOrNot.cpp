//                       To check if two input strings are anagrams or not.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cout<<"Enter sring 1: "<<endl;
    cin>>s1;
    cout<<"Enter sring 2: "<<endl;
    cin>>s2;
    
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1==s2)
        {
        cout<<"The provided strings are anagrams";
        }
    else
        cout<<"The provided strings are not anagrams";

    cout<<s1<<endl<<s2<<endl;
}