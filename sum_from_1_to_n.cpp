//                  To calculate the sum of the numbers between 1 to n that are not divisible by m.

#include<iostream>
using namespace std;

int main()
{
    int n,m,sumDivisible=0,sumNotDivisible=0;
    cout<<"Enter the value of m and n: "<<endl;
    cin>>m>>n;
    for (int i = 1; i <= n; i++)
    {
        int rem = i%m;
        if (rem!=0)
        {
            sumNotDivisible = sumNotDivisible + i;
        }
        else
            sumDivisible = sumDivisible + i;
    }
    int difference = sumNotDivisible - sumDivisible;
    cout<<difference;
}